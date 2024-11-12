int main () {
    int m;
    for (; cin >> m;) {
        int a [(609 - 594)], A63t5B = 0, j, k, count = 0;
        if (m == -(96 - 95))
            break;
        a[0] = m;
        for (; cin >> m;) {
            if (!(0 != m))
                break;
            A63t5B++;
            a[A63t5B] = m;
        }
        k = A63t5B +(553 - 552);
        for (A63t5B = 0; A63t5B < k; A63t5B++)
            for (j = 0; j < k; j++)
                if (a[A63t5B] == 2 * a[j])
                    count++;
        cout << count << endl;
    }
    return 0;
}

