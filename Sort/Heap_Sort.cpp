#include <iostream>
#include <vector>
using namespace std;

// 힙의 성질을 유지하기 위한 함수
void heapify(vector<int> &arr, int n, int i)
{
    int largest = i;       // 루트를 가장 큰 값으로 초기화
    int left = 2 * i + 1;  // 왼쪽 자식
    int right = 2 * i + 2; // 오른쪽 자식

    // 왼쪽 자식이 루트보다 크면 largest 갱신
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // 오른쪽 자식이 largest보다 크면 largest 갱신
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // largest가 루트가 아니면 교환 후 다시 heapify 호출
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

// 힙 정렬 함수
void heapSort(vector<int> &arr)
{
    int n = arr.size();

    // 최대 힙 생성 (Build Heap)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // 정렬 과정
    for (int i = n - 1; i > 0; i--)
    {
        // 가장 큰 값을 배열 끝으로 이동
        swap(arr[0], arr[i]);

        // 힙 크기를 줄이고 다시 최대 힙 구성
        heapify(arr, i, 0);
    }
}

int main()
{
    vector<int> arr = {4, 10, 3, 5, 1};

    heapSort(arr);

    cout << "정렬된 배열: ";
    for (int num : arr)
        cout << num << " ";

    return 0;
}
