int secondSmallest(int arr[], int n) {
    if (n < 2) return -1;

    int small = INT_MAX, second_small = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (arr[i] < small) {
            second_small = small;
            small = arr[i];
        } else if (arr[i] < second_small && arr[i] != small) {
            second_small = arr[i];
        }
    }
    return (second_small == INT_MAX) ? -1 : second_small;
}

int secondLargest(int arr[], int n) {
    if (n < 2) return -1;

    int large = INT_MIN, second_large = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > large) {
            second_large = large;
            large = arr[i];
        } else if (arr[i] > second_large && arr[i] != large) {
            second_large = arr[i];
        }
    }
    return (second_large == INT_MIN) ? -1 : second_large;
}
