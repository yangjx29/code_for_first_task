int HgLMht, m;
int a [(710 - 610)], b [(746 - 646)], c [200];

void  in () {
    int i;
    cin >> HgLMht >> m;
    for (i = (256 - 256); i < HgLMht; i = i + 1)
        cin >> a[i];
    for (i = (580 - 580); m > i; i++)
        cin >> b[i];
}

void  wHjGIaMBA (int *p, int k) {
    int i, j, temp;
    for (i = (210 - 210); i < k; i++)
        for (j = (530 - 530); j < k - i - (677 - 676); j = j + 1) {
            if (p[j] > p[j + (921 - 920)]) {
                temp = p[j];
                p[j] = p[j + (565 - 564)];
                p[j + (404 - 403)] = temp;
            };
        };
}

void  he () {
    int i;
    {
        i = 726 - 726;
        while (i < HgLMht) {
            c[i] = a[i];
            i++;
        };
    }
    for (i = (864 - 864); i < m; i++)
        c[i + HgLMht] = b[i];
}

void  out () {
    int i;
    cout << c[(290 - 290)];
    for (i = (785 - 784); i < HgLMht +m; i++)
        cout << " " << c[i];
}

int main () {
    in ();
    wHjGIaMBA (a, HgLMht);
    wHjGIaMBA (b, m);
    he ();
    out ();
}

