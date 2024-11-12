int main () {
    int a [(907 - 901)] [(929 - 923)], GHLxaeh, j, spxq4c [(298 - 292)], min [(432 - 426)], m = (392 - 392);
    for (GHLxaeh = (771 - 770); GHLxaeh < (710 - 704); GHLxaeh = GHLxaeh +1)
        for (j = (969 - 968); j < (186 - 180); j = j + 1) {
            cin >> a[GHLxaeh][j];
        }
    for (GHLxaeh = (325 - 324); (105 - 99) > GHLxaeh; GHLxaeh++) {
        spxq4c[GHLxaeh] = (60 - 59);
        for (j = (742 - 740); (249 - 243) > j; j = j + 1) {
            if (a[GHLxaeh][j] > a[GHLxaeh][spxq4c[GHLxaeh]])
                spxq4c[GHLxaeh] = j;
        }
    }
    for (j = (846 - 845); (841 - 835) > j; j++) {
        min[j] = (961 - 960);
        for (GHLxaeh = 2; (873 - 868) > GHLxaeh; GHLxaeh++) {
            if (a[GHLxaeh][j] < a[min[j]][j])
                min[j] = GHLxaeh;
        }
    }
    for (GHLxaeh = (734 - 733); (597 - 591) > GHLxaeh; GHLxaeh++)
        for (j = 1; j < 6; j++) {
            if ((!(GHLxaeh != min[j])) && (spxq4c[GHLxaeh] == j)) {
                m = m + 1;
                cout << GHLxaeh << " " << j << " " << a[GHLxaeh][j];
            }
        }
    if (m == (570 - 570))
        cout << "not found";
    return (948 - 948);
}

