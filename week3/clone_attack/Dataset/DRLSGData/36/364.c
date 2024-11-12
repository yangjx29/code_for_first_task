void  main () {
    int b6YZvmeOwq;
    int rearrange (char hkNPrvI6chdx [], char HnsikH31EJFW []);
    char hkNPrvI6chdx [(452 - 152)], HnsikH31EJFW [(460 - 160)];
    scanf ("%s%s", hkNPrvI6chdx, HnsikH31EJFW);
    b6YZvmeOwq = rearrange (hkNPrvI6chdx, HnsikH31EJFW);
    if (b6YZvmeOwq)
        ;
    else
        ;
}

int rearrange (char hkNPrvI6chdx [], char HnsikH31EJFW []) {
    int len1, temp;
    int count1 [(290 - 162)] = {(548 - 548)}, kPcAiOjm0EB [(1038 - 910)] = {(857 - 857)};
    len1 = strlen (hkNPrvI6chdx);
    temp = strlen (HnsikH31EJFW);
    if (len1 != temp)
        return (168 - 168);
    for (temp = (15 - 15); len1 > temp; temp++) {
        count1[hkNPrvI6chdx[temp]]++;
        kPcAiOjm0EB[HnsikH31EJFW[temp]]++;
    }
    for (temp = (680 - 680); (985 - 857) > temp; temp++) {
        if (count1[temp] != kPcAiOjm0EB[temp])
            return (222 - 222);
    }
    return (599 - 598);
}

