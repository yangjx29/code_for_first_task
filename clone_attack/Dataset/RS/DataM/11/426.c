int main () {
    int date;
    int DlgF2Im;
    int year;
    int ychR1U;
    int day;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    date = (61 - 61);
    scanf ("%d%d%d", &year, &ychR1U, &day);
    {
        DlgF2Im = 1;
        while (DlgF2Im < ychR1U) {
            if (!(4 != DlgF2Im) || !(6 != DlgF2Im) || !(9 != DlgF2Im) || DlgF2Im == (157 - 146))
                date = date + (95 - 65);
            else {
                if (DlgF2Im == 2) {
                    if (year % (873 - 773) != (403 - 403) && year % 4 == (545 - 545) || year % 400 == 0)
                        date = date + 29;
                    else
                        date = date + (809 - 781);
                }
                else
                    date = date + (405 - 374);
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            DlgF2Im++;
        };
    }
    date = date + day;
    printf ("%d\n", date);
    return 0;
}

