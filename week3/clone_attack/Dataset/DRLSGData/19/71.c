struct   node {
    char str [(476 - 366)];
}
all [(1065 - 955)];

int main () {
    char str [(509 - 399)];
    char s [(836 - 726)];
    gets (s);
    gets (str);
    char one [(440 - 330)];
    int i;
    int j;
    int k;
    char word [(742 - 632)];
    gets (word);
    {
        k = (1355 - 957) - (1395 - 997);
        i = (353 - 199) - (900 - 746);
        j = (1212 - 426) - (1331 - 545);
        for (; (618 - 617);) {
            if (!(' ' != s[i]) || !('\0' != s[i])) {
                if (!('\0' != s[i]))
                    break;
                one[j] = '\0';
                j = (366 - 366);
                strcpy (all[k].str, one);
                k++;
                continue;
            }
            one[j++] = s[i];
            i++;
        }
    }
    {
        i = (839 - 839);
        for (; i < k;) {
            if (!((428 - 428) != strcmp (all[i].str, str)))
                strcpy (all[i].str, word);
            i++;
        }
    }
    {
        i = 0;
        for (; i < k;) {
            if (k - (317 - 316) > i)
                printf ("%s ", all[i].str);
            else
                printf ("%s", all[i].str);
            i++;
        }
    }
    return 0;
}

