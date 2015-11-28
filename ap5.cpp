#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;

int hi = 8319;
int lo = 0;
string p;
string partition(string A[], int lo, int hi);
void quicksort(string A[], int lo, int hi);

void quicksort(string *, int, int);

string partition(string *, int, int);

int main(){

  ifstream file("data.txt");
  if(file.is_open()){
    string A[16640];
    for(int i = 0; i < 16640; i++){
      file >> A[i];
      cout << A[i] << endl;
    }
    for(int i = 0; i < 16640; i++){
      if(i % 2 == 0){
	A[i] = A[i] + " " + A[i+1];
	cout << A[i] << endl;
      }
    }
  }

}

void quicksort(string A[], int lo, int hi){
  if(lo < hi){
    p = partition(A, lo, hi);
    quicksort(*A, lo, p - 1);
    quicksort(*A, p + 1, hi);
  } 
};

string partition(string A[], int lo, int hi){
  string pivot;
  if(A[lo] < A[lo+1]) {pivot = A[lo+1];}
  else {pivot = A[lo];}
  int i = lo;
  for( int j = lo; j < hi; j++){
    if(A[j] <= pivot){
      string t = A[i];
      A[i] = A[j];
      A[j] = t;
      i++;
    }
  }
  string t1 = A[i];
  A[i] = A[hi];
  A[hi] = t1;
  return A[i];
};
