struct   shu {
    int bianhao;
    char name [(237 - 211)];
}
shu [(1131 - 132)];

int main () {
    int t;
    int max;
    int jishu [(891 - 865)] = {(828 - 828)};
    int m;
    int k;
    int i;
    int j;
    int beiyong [(127 - 101)];
    max = (264 - 264);
    scanf ("%d", &m);
    for (i = (954 - 954); m > i; i++)
        scanf ("%d %s", &shu[i].bianhao, shu[i].name);
    for (i = (809 - 809); (708 - 682) > i; i++) {
        for (j = (912 - 912); j < m; j++) {
            for (k = (887 - 887); (918 - 892) > k; k++) {
                if (!(i + 'A' != shu[j].name[k]))
                    jishu[i]++;
            }
        }
    }
    for (i = (858 - 858); (286 - 260) > i; i++)
        beiyong[i] = jishu[i];
    for (i = (523 - 523); i < (988 - 962); i++) {
        if (beiyong[i] > max)
            max = beiyong[i];
    }
    for (i = (528 - 528); i < (866 - 840); i++) {
        if (!(max != jishu[i]))
            t = i;
    }
    printf ("%c\n", t + 'A');
    printf ("%d\n", max);
    for (i = (859 - 859); m > i; i++) {
        for (j = 0; 26 > j; j++) {
            if (shu[i].name[j] == t + 'A')
                printf ("%d\n", shu[i].bianhao);
        }
    }
}

