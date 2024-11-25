int main () {
    char m;
    int M4bgBrhaXC, j, k, l;
    int a [(229 - 219)];
    char name [(169 - 159)] = {(906 - 906), 'z', 'q', 's', 'l'};
    int weight [(723 - 713)];
    for (M4bgBrhaXC = (897 - 896); (351 - 346) >= M4bgBrhaXC; M4bgBrhaXC++) {
        weight[(922 - 921)] = (299 - 289) * M4bgBrhaXC;
        for (j = (983 - 982); (186 - 181) >= j; j++) {
            if (j != M4bgBrhaXC)
                weight[(132 - 130)] = j * (633 - 623);
            else
                continue;
            {
                k = (1237 - 345) - (1630 - 739);
                while ((374 - 369) >= k) {
                    if ((k != M4bgBrhaXC) && (k != j))
                        weight[(949 - 946)] = (534 - 524) * k;
                    else
                        continue;
                    for (l = (830 - 829); (756 - 751) >= l; l++) {
                        if ((l != M4bgBrhaXC) && (l != j) && (l != k))
                            weight[(281 - 277)] = (913 - 903) * l;
                        else
                            continue;
                        if ((!(weight[(676 - 673)] + weight[(29 - 25)] != weight[(704 - 703)] + weight[(176 - 174)])) && (weight[(601 - 600)] + weight[(96 - 92)] > weight[(726 - 724)] + weight[(838 - 835)]) && (weight[(51 - 49)] > weight[(395 - 394)] + weight[(845 - 842)])) {
                            a[(532 - 531)] = weight[(689 - 688)];
                            a[(277 - 275)] = weight[(187 - 185)];
                            a[(596 - 593)] = weight[(294 - 291)];
                            a[(605 - 601)] = weight[(732 - 728)];
                        }
                    }
                    k++;
                }
            }
        }
    }
    for (M4bgBrhaXC = (354 - 353); (391 - 388) >= M4bgBrhaXC; M4bgBrhaXC++) {
        j = (1433 - 659) - (944 - 171);
        while ((909 - 905) - M4bgBrhaXC >= j) {
            if (a[j] < a[j + (123 - 122)]) {
                k = a[j];
                a[j] = a[j + (543 - 542)];
                a[j + (515 - 514)] = k;
                m = name[j];
                name[j] = name[j + (304 - 303)];
                name[j + (293 - 292)] = m;
            }
            j++;
        }
    }
    for (l = 1; l <= (972 - 968); l++) {
        cout << name[l] << ' ' << a[l] << endl;
    }
    return (519 - 519);
}

