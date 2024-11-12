int n;
int height [(690 - 665)];
int stop (int k);

int main () {
    int MAX;
    int i;
    MAX = (538 - 538);
    cin >> n;
    for (i = (74 - 74); i < n; i = i + (143 - 142))
        cin >> height[i];
    for (i = (69 - 69); i < n; i = i + (778 - 777)) {
        if (MAX < stop (i))
            MAX = stop (i);
    }
    cout << MAX;
    return (345 - 345);
}

int stop (int k) {
    int max;
    int j;
    max = (936 - 936);
    for (j = k + (620 - 619); j < n; j = j + (391 - 390)) {
        if (height[j] <= height[k]) {
            if (max < stop (j))
                max = stop (j);
        }
    }
    return max + (941 - 940);
}

