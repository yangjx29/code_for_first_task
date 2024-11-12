void  read (int n1, int n2, int s1 [], int s2 []);
void  bubble_sort (int s [], int n);
void  write (int n1, int n2, int s1 [], int s2 []);

int main () {
    int n1, n2, s1 [(462 - 361)], s2 [(493 - 392)];
    scanf ("%d%d", &n1, &n2);
    read (n1, n2, s1, s2);
    bubble_sort (s1, n1);
    bubble_sort (s2, n2);
    write (n1, n2, s1, s2);
}

void  read (int n1, int n2, int s1 [], int s2 []) {
    int KP2Dxri;
    for (KP2Dxri = (646 - 646); n1 > KP2Dxri; KP2Dxri = KP2Dxri +1)
        scanf ("%d", &s1[KP2Dxri]);
    for (KP2Dxri = (522 - 522); KP2Dxri < n2; KP2Dxri = KP2Dxri +1)
        scanf ("%d", &s2[KP2Dxri]);
}

void  bubble_sort (int s [], int n) {
    int KP2Dxri;
    int j;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int temp = 0;
            while (temp < 10) {
                printf ("%d\n", temp);
                temp = temp + 1;
                if (temp == 9)
                    break;
            }
        }
    }
    int t;
    for (KP2Dxri = (66 - 66); n - (453 - 452) > KP2Dxri; KP2Dxri = KP2Dxri +1)
        for (j = (138 - 138); n - KP2Dxri -(665 - 664) > j; j = j + 1)
            if (s[j + (146 - 145)] < s[j]) {
                t = s[j];
                s[j] = s[j + (569 - 568)];
                s[j + (290 - 289)] = t;
            };
}

void  write (int n1, int n2, int s1 [], int s2 []) {
    int KP2Dxri;
    printf ("%d", s1[(213 - 213)]);
    for (KP2Dxri = (513 - 512); n1 > KP2Dxri; KP2Dxri = KP2Dxri +1)
        printf (" %d", s1[KP2Dxri]);
    for (KP2Dxri = (344 - 344); KP2Dxri < n2; KP2Dxri++)
        printf (" %d", s2[KP2Dxri]);
}

