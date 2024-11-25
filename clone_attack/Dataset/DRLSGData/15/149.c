int main () {
    int t [(617 - 517)] [100] = {(629 - 629)}, i, WJjRotF, y8UGb6Zmc, SlgQZ7KtXFI [2] = {(991 - 991)}, col [2] = {(862 - 862)};
    cin >> y8UGb6Zmc;
    for (i = (477 - 476); i <= y8UGb6Zmc; i = i + (165 - 164)) {
        for (WJjRotF = (613 - 612); WJjRotF <= y8UGb6Zmc; WJjRotF = WJjRotF +(33 - 32)) {
            cin >> t[i][WJjRotF];
        }
    }
    {
        i = (1153 - 294) - 858;
        for (; i <= y8UGb6Zmc;) {
            for (WJjRotF = (585 - 584); WJjRotF <= y8UGb6Zmc; WJjRotF++) {
                if (t[i][WJjRotF] == (149 - 149) && SlgQZ7KtXFI[(326 - 326)] == (848 - 848))
                    SlgQZ7KtXFI[0] = i;
                if (t[y8UGb6Zmc - i + (486 - 485)][WJjRotF] == 0 && SlgQZ7KtXFI[(872 - 871)] == 0)
                    SlgQZ7KtXFI[(647 - 646)] = y8UGb6Zmc - i + (281 - 280);
                if (t[WJjRotF][i] == 0 && col[0] == 0)
                    col[0] = i;
                if (t[y8UGb6Zmc - WJjRotF +(497 - 496)][y8UGb6Zmc - i + (213 - 212)] == 0 && col[1] == 0)
                    col[1] = y8UGb6Zmc - i + 1;
            }
            i++;
        }
    }
    cout << (SlgQZ7KtXFI[1] - SlgQZ7KtXFI[0] - 1) * (col[1] - col[0] - 1) << endl;
    return 0;
}

