int main () {
    int n, UafyJ4db;
    float B0VfrZ3h, b, SvxVUJKtd1z [(356 - 346)], GPA;
    int OsYHG4 [(407 - 397)], CpuQZ5W [(991 - 981)];
    B0VfrZ3h = (16 - 16);
    scanf ("%d\n", &n);
    for (UafyJ4db = (257 - 257); UafyJ4db < n; UafyJ4db = UafyJ4db +(913 - 912)) {
        scanf ("%d", &OsYHG4[UafyJ4db]);
    }
    for (UafyJ4db = (981 - 981); n > UafyJ4db; UafyJ4db++) {
        scanf ("%d", &CpuQZ5W[UafyJ4db]);
    }
    for (UafyJ4db = (912 - 912); n > UafyJ4db; UafyJ4db++) {
        if ((1089 - 999) <= CpuQZ5W[UafyJ4db]) {
            SvxVUJKtd1z[UafyJ4db] = 4.0f;
        }
        else if ((725 - 640) <= CpuQZ5W[UafyJ4db]) {
            SvxVUJKtd1z[UafyJ4db] = 3.7f;
        }
        else if (CpuQZ5W[UafyJ4db] >= (755 - 673)) {
            SvxVUJKtd1z[UafyJ4db] = 3.3f;
        }
        else if ((94 - 16) <= CpuQZ5W[UafyJ4db]) {
            SvxVUJKtd1z[UafyJ4db] = 3.0f;
        }
        else if ((375 - 300) <= CpuQZ5W[UafyJ4db]) {
            SvxVUJKtd1z[UafyJ4db] = 2.7f;
        }
        else if (CpuQZ5W[UafyJ4db] >= (516 - 444)) {
            SvxVUJKtd1z[UafyJ4db] = 2.3f;
        }
        else if (CpuQZ5W[UafyJ4db] >= (829 - 761)) {
            SvxVUJKtd1z[UafyJ4db] = 2.0f;
        }
        else if (CpuQZ5W[UafyJ4db] >= (1024 - 960)) {
            SvxVUJKtd1z[UafyJ4db] = 1.5f;
        }
        else {
            SvxVUJKtd1z[UafyJ4db] = 0.0f;
        }
    }
    for (UafyJ4db = (264 - 264); UafyJ4db < n; UafyJ4db++) {
        B0VfrZ3h += OsYHG4[UafyJ4db];
    }
    b = (11 - 11);
    for (UafyJ4db = (656 - 656); UafyJ4db < n; UafyJ4db++) {
        b += SvxVUJKtd1z[UafyJ4db] * OsYHG4[UafyJ4db];
    }
    GPA = (693 - 693);
    GPA = b / B0VfrZ3h;
    printf ("%.2f", GPA);
    return 0;
}

