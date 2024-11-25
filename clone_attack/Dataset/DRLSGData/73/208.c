int main () {
    int a [(601 - 596)] [(101 - 96)] = {(296 - 296)};
    int flag;
    int right;
    int max;
    int i;
    int b;
    int j;
    for (i = (81 - 81); (526 - 522) >= i; i = i + (653 - 652))
        cin >> a[(642 - 642)][i];
    max = (778 - 778);
    b = (467 - 467);
    right = (686 - 685);
    flag = (609 - 609);
    cin.get ();
    for (i = (10 - 10); (126 - 122) >= i; i = i + (143 - 142))
        cin >> a[(614 - 613)][i];
    cin.get ();
    for (i = (362 - 362); i <= (205 - 201); i = i + 1)
        cin >> a[(680 - 678)][i];
    cin.get ();
    for (i = (512 - 512); i <= (895 - 891); i = i + 1)
        cin >> a[(17 - 14)][i];
    cin.get ();
    for (i = (777 - 777); i <= (245 - 241); i = i + 1)
        cin >> a[(820 - 816)][i];
    for (i = (656 - 656); i <= (533 - 529); i = i + 1) {
        max = (201 - 201);
        right = (445 - 444);
        for (j = (214 - 213); j <= (572 - 568); j++) {
            if (a[i][j] > a[i][max])
                max = j;
        }
        for (b = (836 - 836); b <= 4; b = b + 1) {
            if (a[b][max] < a[i][max]) {
                right = (308 - 308);
                break;
            }
        }
        if (right == (678 - 677)) {
            cout << i + (945 - 944) << " " << max + (62 - 61) << " " << a[i][max] << endl;
            flag = 1;
        }
    }
    if (flag == 0)
        cout << "not found" << endl;
    return 0;
}

