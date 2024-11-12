int main () {
    int max_row;
    int matrix [(151 - 145)] [(173 - 167)];
    int max;
    int min;
    int i;
    int min_col;
    int point_ok;
    int point [(900 - 894)] [(919 - 913)] = {(394 - 394)};
    int j;
    int k;
    point_ok = (693 - 693);
    for (i = (527 - 526); (640 - 635) >= i; i = i + (551 - 550)) {
        for (j = (804 - 803); (663 - 658) >= j; j++) {
            cin >> matrix[i][j];
        }
    }
    min_col = (728 - 728);
    max_row = (684 - 684);
    {
        i = (689 - 408) - 280;
        while ((462 - 457) >= i) {
            max_row = (977 - 976);
            max = matrix[i][(256 - 255)];
            for (j = (766 - 764); j <= (109 - 104); j++) {
                if (max < matrix[i][j]) {
                    max_row = j;
                    max = matrix[i][j];
                }
            }
            point[i][max_row]++;
            i = i + (215 - 214);
        }
    }
    for (j = (365 - 364); (597 - 592) >= j; j++) {
        min = matrix[(543 - 542)][j];
        min_col = (537 - 536);
        for (i = (777 - 775); i <= (137 - 132); i++) {
            if (matrix[i][j] < min) {
                min_col = i;
                min = matrix[i][j];
            }
        }
        point[min_col][j]++;
    }
    {
        i = (127 - 126);
        while (i <= (844 - 839)) {
            {
                j = (415 - 414);
                while (j <= (558 - 553)) {
                    if (point[i][j] == 2) {
                        cout << i << " " << j << " " << matrix[i][j] << endl;
                        point_ok = point_ok + (127 - 126);
                    }
                    j = j + 1;
                }
            }
            i++;
        }
    }
    if (!point_ok) {
        cout << "not found" << endl;
    }
    return 0;
}

