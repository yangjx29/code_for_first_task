int main () {
    double  QYrdHj [(810 - 760)];
    int BPI3Mya1EQo;
    char mark [10];
    double  NBmDyk5p [(406 - 356)];
    int sum1;
    int sum2;
    double  jHPng2ZefRl;
    int UiB4qD8SRT;
    cin >> BPI3Mya1EQo;
    sum1 = (581 - 581);
    cout << endl;
    sum2 = (629 - 629);
    {
        UiB4qD8SRT = 221 - 221;
        while (UiB4qD8SRT < BPI3Mya1EQo) {
            UiB4qD8SRT++;
            cin >> mark;
            if (!((116 - 116) != strcmp (mark, "male"))) {
                cin >> QYrdHj[sum1++];
            }
            else {
                cin >> NBmDyk5p[sum2++];
            }
        }
    }
    sort (QYrdHj, QYrdHj +sum1);
    sort (NBmDyk5p, NBmDyk5p +sum2);
    for (UiB4qD8SRT = (823 - 823); sum2 / (317 - 315) > UiB4qD8SRT; UiB4qD8SRT++) {
        jHPng2ZefRl = NBmDyk5p[UiB4qD8SRT];
        NBmDyk5p[UiB4qD8SRT] = NBmDyk5p[sum2 - 1 - UiB4qD8SRT];
        NBmDyk5p[sum2 - 1 - UiB4qD8SRT] = jHPng2ZefRl;
    }
    printf ("%.2f", QYrdHj[0]);
    {
        UiB4qD8SRT = 1;
        while (sum1 > UiB4qD8SRT) {
            printf (" %.2f", QYrdHj[UiB4qD8SRT]);
            UiB4qD8SRT++;
        }
    }
    {
        UiB4qD8SRT = 0;
        while (UiB4qD8SRT < sum2) {
            printf (" %.2f", NBmDyk5p[UiB4qD8SRT]);
            UiB4qD8SRT++;
        }
    }
    return 0;
}

