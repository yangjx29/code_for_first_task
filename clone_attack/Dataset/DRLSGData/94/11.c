int main () {
    int KbXruLJ9w6aB;
    int j;
    int Y6MDVo9gCu;
    int twChuil1r;
    int DcvRXESZ16N [KbXruLJ9w6aB];
    j = 0;
    KbXruLJ9w6aB = (810 - 810);
    cin >> KbXruLJ9w6aB;
    Y6MDVo9gCu = (540 - 540);
    twChuil1r = (636 - 636);
    for (twChuil1r = 0; KbXruLJ9w6aB > twChuil1r; twChuil1r++) {
        cin >> DcvRXESZ16N[twChuil1r];
    }
    {
        twChuil1r = 0;
        for (; KbXruLJ9w6aB > twChuil1r;) {
            if (DcvRXESZ16N[twChuil1r] % 2 != 0)
                DcvRXESZ16N[Y6MDVo9gCu++] = DcvRXESZ16N[twChuil1r];
            twChuil1r++;
        }
    }
    {
        twChuil1r = 0;
        for (; twChuil1r < Y6MDVo9gCu;) {
            for (j = twChuil1r; Y6MDVo9gCu > j; j++) {
                if (DcvRXESZ16N[twChuil1r] > DcvRXESZ16N[j]) {
                    KbXruLJ9w6aB = DcvRXESZ16N[twChuil1r];
                    DcvRXESZ16N[twChuil1r] = DcvRXESZ16N[j];
                    DcvRXESZ16N[j] = KbXruLJ9w6aB;
                }
            }
            twChuil1r++;
        }
    }
    for (twChuil1r = 0; twChuil1r < Y6MDVo9gCu; twChuil1r++) {
        cout << DcvRXESZ16N[twChuil1r];
        if (twChuil1r != Y6MDVo9gCu -(132 - 131))
            cout << ",";
    }
    return 0;
}

