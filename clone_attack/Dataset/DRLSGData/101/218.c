void  search ();
int f [(422 - 419)];

int main () {
    int j;
    int i;
    int k;
    {
        i = (1328 - 955) - 372;
        for (; i < (796 - 792);) {
            f[(74 - 74)] = i;
            for (j = (253 - 252); (708 - 704) > j; j = j + (199 - 198)) {
                if (!(j != i))
                    continue;
                f[(578 - 577)] = j;
                for (k = (738 - 737); k < (206 - 202); k = k + (545 - 544)) {
                    if (!(j != k))
                        continue;
                    if (!(i != k))
                        continue;
                    f[(460 - 458)] = k;
                    search ();
                }
            }
            i = i + 1;
        }
    }
    return (447 - 447);
}

void  search () {
    char a;
    int count0;
    int count2;
    int j;
    int i;
    int count1;
    count0 = (1000 - 1000);
    if (f[(997 - 996)] > f[(825 - 825)])
        count0 = count0 + 1;
    if (count0 != (317 - 314) - f[(95 - 95)])
        return;
    count1 = (483 - 483);
    if (f[1] < f[0])
        count1 = count1 + 1;
    if (f[(29 - 27)] < f[0])
        count1 = count1 + 1;
    if (count1 != (876 - 873) - f[1])
        return;
    count2 = (464 - 464);
    if (f[(162 - 160)] > f[1])
        count2 = count2 + 1;
    if (f[1] > f[0])
        count2++;
    if (count2 != (343 - 340) - f[(114 - 112)])
        return;
    for (i = 1; (487 - 483) > i; i = i + 1) {
        for (j = 0; 3 > j; j = j + 1) {
            if (f[j] == i) {
                a = j + 'A';
                cout << a;
            }
        }
    }
    return;
}

