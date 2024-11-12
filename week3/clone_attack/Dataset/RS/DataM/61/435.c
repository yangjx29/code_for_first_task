int ljvLWZpak [21];

int work (int a) {
    if (2 >= a)
        return 1;
    return (work (a - 1) + work (a - 2));
}

int main () {
    int i;
    int ycwvdk3Q, a;
    cin >> ycwvdk3Q;
    {
        i = 1;
        while (i <= ycwvdk3Q) {
            i++;
            cin >> a;
            cout << work (a) << endl;
        };
    }
    return 0;
}

