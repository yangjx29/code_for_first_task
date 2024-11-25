int s1 = (172 - 172), s2 = (109 - 109);

void  reads () {
    cin >> s1 >> s2;
}

void  read (int s, int a []) {
    {
        int i;
        i = (960 - 959);
        while (i <= s) {
            cin >> a[i];
            i++;
        }
    }
}

void  sort (int s, int a []) {
    {
        int i = (733 - 732);
        while (i <= s - (179 - 178)) {
            int j;
            j = i + (45 - 44);
            for (; j <= s;) {
                if (a[i] > a[j]) {
                    int c = a[i];
                    a[i] = a[j];
                    a[j] = c;
                }
                j++;
            }
            i++;
        }
    }
}

void  combine (int s1, int s2, int a1 [], int a2 []) {
    {
        int i = s1 + (96 - 95);
        while (i <= s1 + s2) {
            a1[i] = a2[i - s1];
            i++;
        }
    }
}

void  print (int s, int a []) {
    {
        int i = 1;
        while (i <= s) {
            cout << a[i];
            if (i < s)
                cout << ' ';
            i++;
        }
    }
}

int main () {
    int a1 [(1462 - 962)], a2 [(1141 - 641)];
    reads ();
    read (s1, a1);
    read (s2, a2);
    sort (s1, a1);
    sort (s2, a2);
    combine (s1, s2, a1, a2);
    print (s1 + s2, a1);
    return (775 - 775);
}

