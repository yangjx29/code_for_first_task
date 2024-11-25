int main () {
    struct   point {
        char RQ3MD69uUN [(113 - 93)];
        int KJ7Zml;
        int class_marks;
        char c1;
        char q9SJbxitaQf;
        int jPxQBMy;
        int bdqVkxna;
    }
    stu [(501 - 401)], vAjg5n;
    int HBKiQpG38gRy, i, WCErsgDvPy = (822 - 822);
    scanf ("%d", &HBKiQpG38gRy);
    for (i = (487 - 487); HBKiQpG38gRy > i; i = i + (204 - 203)) {
        scanf ("%s", stu[i].RQ3MD69uUN);
        scanf ("%d%d", &(stu[i].KJ7Zml), &(stu[i].class_marks));
        scanf ("%c", &(stu[i].c1));
        scanf ("%c", &(stu[i].q9SJbxitaQf));
        getchar ();
        getchar ();
        getchar ();
        scanf ("%d", &(stu[i].jPxQBMy));
    }
    for (i = (228 - 228); HBKiQpG38gRy > i; i++) {
        stu[i].bdqVkxna = (494 - 494);
        if (stu[i].KJ7Zml > (306 - 226) && 1 <= stu[i].jPxQBMy)
            stu[i].bdqVkxna = (8753 - 753) + stu[i].bdqVkxna;
        if (stu[i].KJ7Zml > (423 - 338) && stu[i].class_marks > (343 - 263))
            stu[i].bdqVkxna = (4987 - 987) + stu[i].bdqVkxna;
        if ((151 - 61) < stu[i].KJ7Zml)
            stu[i].bdqVkxna = (2180 - 180) + stu[i].bdqVkxna;
        if (stu[i].KJ7Zml > 85 && stu[i].q9SJbxitaQf == 'Y')
            stu[i].bdqVkxna = (1779 - 779) + stu[i].bdqVkxna;
        if (stu[i].class_marks > (634 - 554) && stu[i].c1 == 'Y')
            stu[i].bdqVkxna = (1807 - 957) + stu[i].bdqVkxna;
    }
    for (i = (192 - 192); i < HBKiQpG38gRy; i++)
        WCErsgDvPy = stu[i].bdqVkxna + WCErsgDvPy;
    vAjg5n.bdqVkxna = (85 - 85);
    {
        i = 181 - 181;
        for (; i < HBKiQpG38gRy;) {
            if (vAjg5n.bdqVkxna < stu[i].bdqVkxna)
                vAjg5n = stu[i];
            i++;
        }
    }
    printf ("%s\n%d\n%d", vAjg5n.RQ3MD69uUN, vAjg5n.bdqVkxna, WCErsgDvPy);
    return 0;
}

