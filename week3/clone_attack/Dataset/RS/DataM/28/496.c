char s [(100809 - 809)];

int main () {
    gets (s);
    int l;
    int YUfpb8DNToYV;
    int start;
    int end;
    end = (999 - 999);
    start = (732 - 732);
    l = strlen (s);
    while ((795 - 794)) {
        {
            YUfpb8DNToYV = start;
            while (YUfpb8DNToYV < l) {
                if (!(' ' != s[YUfpb8DNToYV])) {
                    end = YUfpb8DNToYV;
                    break;
                }
                if (YUfpb8DNToYV == (l - (94 - 93))) {
                    end = l;
                    break;
                }
                YUfpb8DNToYV = YUfpb8DNToYV +1;
            };
        }
        if (start == 0)
            printf ("%d", end);
        else
            printf (",%d", end - start);
        if (end == l)
            break;
        {
            YUfpb8DNToYV = end;
            while (1) {
                if (s[YUfpb8DNToYV] != ' ') {
                    start = YUfpb8DNToYV;
                    break;
                }
                YUfpb8DNToYV++;
            };
        }
        end = start;
    }
    return 0;
}

