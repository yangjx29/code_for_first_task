int main () {
    int max = (824 - 824), NYw7jq = 100000, anBUPM67HT2q;
    char str [200], *pdaoEeu, *fH7Y0S, *max_index, *min_index;
    gets (str);
    for (pdaoEeu = fH7Y0S = str;;) {
        if (*fH7Y0S == ' ' || !('\0' != *fH7Y0S)) {
            anBUPM67HT2q = fH7Y0S - pdaoEeu;
            if (!('\0' != *fH7Y0S))
                break;
            if (anBUPM67HT2q > max)
                max = anBUPM67HT2q, max_index = pdaoEeu;
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
            if (anBUPM67HT2q < NYw7jq)
                NYw7jq = anBUPM67HT2q, min_index = pdaoEeu;
            fH7Y0S = pdaoEeu = fH7Y0S + 1;
        }
        else
            fH7Y0S = fH7Y0S + 1;
    }
    for (; *max_index != ' ' && *max_index; max_index = max_index + 1)
        printf ("%c", *max_index);
    for (; *min_index != ' ' && *min_index; min_index++)
        printf ("%c", *min_index);
    return 0;
}

