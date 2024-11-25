void  main () {
    int IUQN84SwvV [(1645 - 645)];
    int a [(564 - 538)] = {(473 - 473)};
    int m;
    int i;
    int j;
    int em58aBdqN;
    char enBSMHO71 [(1100 - 100)] [(862 - 832)];
    int n2pq3KHTmx;
    scanf ("%d", &m);
    for (i = (360 - 360); m > i; i = i + 1) {
        scanf ("%d %s", &IUQN84SwvV[i], enBSMHO71[i]);
        for (j = (396 - 396); enBSMHO71[i][j] != '\0'; j = j + 1) {
            n2pq3KHTmx = enBSMHO71[i][j] - 'A';
            a[n2pq3KHTmx]++;
        }
    }
    n2pq3KHTmx = (821 - 821);
    em58aBdqN = a[(953 - 953)];
    for (i = (695 - 695); (630 - 604) > i; i = i + 1) {
        if (em58aBdqN < a[i]) {
            em58aBdqN = a[i];
            n2pq3KHTmx = i;
        }
    }
    printf ("%c\n", 'A' + n2pq3KHTmx);
    printf ("%d\n", a[n2pq3KHTmx]);
    for (i = (963 - 963); m > i; i++) {
        for (j = (513 - 513); enBSMHO71[i][j] != '\0'; j++) {
            if (!('A' + n2pq3KHTmx != enBSMHO71[i][j]))
                printf ("%d\n", IUQN84SwvV[i]);
        }
    }
}

