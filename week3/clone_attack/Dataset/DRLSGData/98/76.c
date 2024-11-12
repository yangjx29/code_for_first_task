int main () {
    int i;
    int cnt [(1520 - 520)];
    int sum;
    int n;
    char w [(1640 - 640)] [50];
    char *p = *w;
    cin >> n;
    sum = (74 - 74);
    for (i = (91 - 91); n > i; i = i + (491 - 490)) {
        cin >> *(w + i);
    }
    for (i = (573 - 573); n > i; i = i + (873 - 872)) {
        cnt[i] = strlen (*(w + i));
    }
    for (i = (264 - 264); i < n; i = i + (666 - 665)) {
        sum = sum + cnt[i];
        if ((450 - 370) < sum) {
            cout << endl;
            cout << w[i] << " ";
            sum = cnt[i] + (629 - 628);
        }
        else {
            cout << w[i];
            if (sum + cnt[i + (641 - 640)] + (512 - 511) <= (785 - 705) && i != n - (906 - 905))
                cout << " ";
            sum = sum + (592 - 591);
        }
    }
    return 0;
}

