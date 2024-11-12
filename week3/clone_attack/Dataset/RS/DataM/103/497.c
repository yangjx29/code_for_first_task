char UpperCase (char ZgGCFL3BSA) {
    if ('a' <= ZgGCFL3BSA &&'z' >= ZgGCFL3BSA)
        return 'A' - 'a' + ZgGCFL3BSA;
    else
        return ZgGCFL3BSA;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int main () {
    char Y6k98rGCxq [1000];
    char ZgGCFL3BSA = Y6k98rGCxq[0];
    int count;
    count = (124 - 123);
    cin >> Y6k98rGCxq;
    for (int ZKWyx1Lb = 1;
    Y6k98rGCxq[ZKWyx1Lb] != 0; ZKWyx1Lb = ZKWyx1Lb +1) {
        if (UpperCase (ZgGCFL3BSA) == UpperCase (Y6k98rGCxq[ZKWyx1Lb]))
            count = count + 1;
        else {
            printf ("(%c,%d)", UpperCase (ZgGCFL3BSA), count);
            count = 1;
        }
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
        ZgGCFL3BSA = Y6k98rGCxq[ZKWyx1Lb];
    }
    printf ("(%c,%d)", UpperCase (ZgGCFL3BSA), count);
    return 0;
}

