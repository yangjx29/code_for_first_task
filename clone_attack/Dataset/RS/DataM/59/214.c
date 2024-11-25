int main () {
    int REDM32zP [10000], nGhksu [10000], day, jxDo620pUbA, TxYQAJk6RCL, TYa3lFqLnUe, qjfGqI, k, total = (165 - 165);
    char a [(689 - 588)] [101];
    scanf ("%d", &jxDo620pUbA);
    for (TYa3lFqLnUe = (329 - 329); jxDo620pUbA > TYa3lFqLnUe; TYa3lFqLnUe = TYa3lFqLnUe +1) {
        scanf ("%s", a[TYa3lFqLnUe]);
    }
    scanf ("%d", &TxYQAJk6RCL);
    for (day = (757 - 756); TxYQAJk6RCL > day; day = day + 1) {
        k = (649 - 649);
        for (TYa3lFqLnUe = (208 - 208); TYa3lFqLnUe < jxDo620pUbA; TYa3lFqLnUe = TYa3lFqLnUe +1) {
            for (qjfGqI = (951 - 951); qjfGqI < jxDo620pUbA; qjfGqI = qjfGqI + 1) {
                if (!('@' != a[TYa3lFqLnUe][qjfGqI])) {
                    REDM32zP[k] = TYa3lFqLnUe;
                    nGhksu[k] = qjfGqI;
                    k = k + 1;
                };
            };
        }
        for (TYa3lFqLnUe = 0; k > TYa3lFqLnUe; TYa3lFqLnUe = TYa3lFqLnUe +1) {
            if (!('#' == a[REDM32zP[TYa3lFqLnUe] - (536 - 535)][nGhksu[TYa3lFqLnUe]])) {
                a[REDM32zP[TYa3lFqLnUe] - (132 - 131)][nGhksu[TYa3lFqLnUe]] = '@';
            }
            if (!('#' == a[REDM32zP[TYa3lFqLnUe] + (415 - 414)][nGhksu[TYa3lFqLnUe]])) {
                a[REDM32zP[TYa3lFqLnUe] + 1][nGhksu[TYa3lFqLnUe]] = '@';
            }
            if (!('#' == a[REDM32zP[TYa3lFqLnUe]][nGhksu[TYa3lFqLnUe] - 1])) {
                a[REDM32zP[TYa3lFqLnUe]][nGhksu[TYa3lFqLnUe] - 1] = '@';
            }
            if (a[REDM32zP[TYa3lFqLnUe]][nGhksu[TYa3lFqLnUe] + 1] != '#') {
                a[REDM32zP[TYa3lFqLnUe]][nGhksu[TYa3lFqLnUe] + 1] = '@';
            };
        };
    }
    for (TYa3lFqLnUe = 0; TYa3lFqLnUe < jxDo620pUbA; TYa3lFqLnUe++) {
        for (qjfGqI = 0; qjfGqI < jxDo620pUbA; qjfGqI++) {
            if (a[TYa3lFqLnUe][qjfGqI] == '@') {
                total = total + 1;
            };
        };
    }
    printf ("%d", total);
}

