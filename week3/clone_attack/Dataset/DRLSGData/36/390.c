char YXefHDQcG [(267 - 257)] = {'\0'}, U62j1AtOG [(476 - 466)] = {'\0'};
char pYUp81NKS [(409 - 399)] = {'\0'};
int kZm5zons1 [(1008 - 998)] = {(422 - 422)}, JPdna8I = (883 - 883), fYt1Oj = (935 - 935), Wj0AwnKNsv = (477 - 477);

void  QdCIwj (int jXNpZy) {
    for (int uSV9ay0 = (604 - 604);
    uSV9ay0 < JPdna8I; uSV9ay0++) {
        if (!kZm5zons1[uSV9ay0]) {
            pYUp81NKS[jXNpZy] = YXefHDQcG[uSV9ay0];
            kZm5zons1[uSV9ay0] = (907 - 906);
            kZm5zons1[uSV9ay0] = (624 - 624);
            QdCIwj (jXNpZy + (528 - 527));
        }
    }
    if (!(JPdna8I -(335 - 334) != jXNpZy)) {
        if (!(0 != strcmp (pYUp81NKS, U62j1AtOG)))
            fYt1Oj = (337 - 336);
        else
            fYt1Oj = 0;
        Wj0AwnKNsv = Wj0AwnKNsv +fYt1Oj;
    }
}

int main () {
    int uSV9ay0;
    if (Wj0AwnKNsv != 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    cin >> YXefHDQcG >> U62j1AtOG;
    for (uSV9ay0 = 0; (70 - 60) > uSV9ay0; uSV9ay0++)
        if (YXefHDQcG[uSV9ay0] != '\0')
            JPdna8I++;
    QdCIwj (0);
    return 0;
}

