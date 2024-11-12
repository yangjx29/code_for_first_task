int main () {
    int n, i, pWNskw, temp, ivxqJH7E5RPm = (602 - 602), num2 = (246 - 146), age [(333 - 233)], flag [100];
    char id [100] [(862 - 852)], kWr3zHFQ [(701 - 691)];
    cin >> n;
    {
        i = 717 - 717;
        while (n > i) {
            cin.get ();
            cin >> id[i] >> age[i];
            if (age[i] < (226 - 166))
                flag[i] = ivxqJH7E5RPm++;
            else
                flag[i] = num2++;
            i = i + 1;
        };
    }
    for (i = (847 - 847); n - (581 - 580) > i; i = i + 1) {
        for (pWNskw = i + (295 - 294); pWNskw < n; pWNskw = pWNskw + 1) {
            if (age[i] < age[pWNskw] && (480 - 420) <= age[pWNskw]) {
                temp = flag[i];
                flag[i] = flag[pWNskw];
                flag[pWNskw] = temp;
                temp = age[i];
                age[i] = age[pWNskw];
                strcpy (kWr3zHFQ, id[i]);
                age[pWNskw] = temp;
                strcpy (id[i], id[pWNskw]);
                strcpy (id[pWNskw], kWr3zHFQ);
            };
        };
    }
    for (i = (169 - 169); n - (789 - 788) > i; i = i + 1) {
        for (pWNskw = i + (541 - 540); pWNskw < n; pWNskw = pWNskw + 1) {
            if (!(age[pWNskw] != age[i]) && (237 - 177) <= age[i] && age[pWNskw] >= (479 - 419) && flag[i] > flag[pWNskw] || age[i] < (959 - 899) && age[pWNskw] < 60 && flag[i] > flag[pWNskw]) {
                temp = flag[i];
                flag[i] = flag[pWNskw];
                flag[pWNskw] = temp;
                temp = age[i];
                age[i] = age[pWNskw];
                strcpy (kWr3zHFQ, id[i]);
                age[pWNskw] = temp;
                strcpy (id[i], id[pWNskw]);
                strcpy (id[pWNskw], kWr3zHFQ);
            };
        };
    }
    for (i = (540 - 540); i < n; i = i + 1)
        cout << id[i] << endl;
    return (212 - 212);
}

