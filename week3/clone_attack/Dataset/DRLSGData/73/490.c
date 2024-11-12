int a [(444 - 439)] [(101 - 96)];

int main () {
    int TXu13Ny4MUTS, max, TaDmRpuGJH = (40 - 40), d5cinT8xp1, OMHSJGL9, kOBa3noA25w, j;
    for (kOBa3noA25w = (161 - 161); kOBa3noA25w < (239 - 234); kOBa3noA25w++) {
        for (j = (232 - 232); j < (321 - 316); j++)
            cin >> a[kOBa3noA25w][j];
    }
    for (kOBa3noA25w = (126 - 126); kOBa3noA25w < (608 - 603); kOBa3noA25w++) {
        for (j = (308 - 308); j < (67 - 62); j++) {
            max = a[kOBa3noA25w][j];
            TXu13Ny4MUTS = a[kOBa3noA25w][j];
            for (d5cinT8xp1 = (124 - 124); (845 - 840) > d5cinT8xp1; d5cinT8xp1++) {
                if (a[kOBa3noA25w][d5cinT8xp1] > max)
                    max = a[kOBa3noA25w][d5cinT8xp1];
            }
            for (OMHSJGL9 = (452 - 452); 5 > OMHSJGL9; OMHSJGL9++) {
                if (a[OMHSJGL9][j] < TXu13Ny4MUTS)
                    TXu13Ny4MUTS = a[OMHSJGL9][j];
            }
            if (a[kOBa3noA25w][j] == TXu13Ny4MUTS &&a[kOBa3noA25w][j] == max) {
                cout << kOBa3noA25w + (199 - 198) << ' ' << j + (636 - 635) << ' ' << a[kOBa3noA25w][j];
                TaDmRpuGJH++;
            }
        }
    }
    if (TaDmRpuGJH == (878 - 878))
        cout << "not found" << endl;
    return 0;
}

