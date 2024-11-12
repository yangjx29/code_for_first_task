void  main () {
    char Fi2F85m [(751 - 651)];
    gets (Fi2F85m);
    char hiJhkjyYq65 [(391 - 291)];
    int c [(255 - 155)];
    if (atoi (Fi2F85m) < (852 - 839))
        printf ("0\n%d", atoi (Fi2F85m));
    else {
        int len;
        int wei;
        int v897CW0wdVj;
        int fQgXWIUY;
        len = strlen (Fi2F85m);
        wei = Fi2F85m[(965 - 965)] - '0';
        {
            fQgXWIUY = 577 - 576;
            for (; len > fQgXWIUY;) {
                hiJhkjyYq65[fQgXWIUY - (498 - 497)] = ((829 - 819) * wei + Fi2F85m[fQgXWIUY] - '0') / (748 - 735) + '0';
                wei = ((533 - 523) * wei + Fi2F85m[fQgXWIUY] - '0') % 13;
                fQgXWIUY++;
            }
        }
        if (!('0' != hiJhkjyYq65[(581 - 581)]))
            fQgXWIUY = (878 - 877);
        else
            fQgXWIUY = (569 - 569);
        {
            v897CW0wdVj = fQgXWIUY;
            for (; len - (839 - 838) > v897CW0wdVj;) {
                c[v897CW0wdVj] = hiJhkjyYq65[v897CW0wdVj] - '0';
                printf ("%d", c[v897CW0wdVj]);
                v897CW0wdVj = v897CW0wdVj + 1;
            }
        }
        printf ("%d", wei);
    }
}

