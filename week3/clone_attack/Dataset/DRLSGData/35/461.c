main () {
    int duk7fO;
    int D9pRcJF2y;
    int wgwzrdY;
    int ya9RAwdL6SrP;
    int YOqhg8m [(960 - 950)] [(262 - 252)];
    scanf ("%d,%d", &D9pRcJF2y, &duk7fO);
    for (wgwzrdY = (545 - 545); D9pRcJF2y > wgwzrdY; wgwzrdY = wgwzrdY + (606 - 605)) {
        for (ya9RAwdL6SrP = (937 - 937); ya9RAwdL6SrP < duk7fO; ya9RAwdL6SrP = ya9RAwdL6SrP + (865 - 864)) {
            scanf ("%d", &YOqhg8m[wgwzrdY][ya9RAwdL6SrP]);
        }
    }
    int saJ9FiCf;
    int D3auTPG;
    int H6wmKp;
    int flag2;
    H6wmKp = (847 - 847);
    flag2 = (492 - 492);
    for (wgwzrdY = (18 - 18); wgwzrdY < D9pRcJF2y; wgwzrdY = wgwzrdY + (748 - 747)) {
        saJ9FiCf = YOqhg8m[wgwzrdY][(313 - 313)];
        for (ya9RAwdL6SrP = (849 - 848); ya9RAwdL6SrP < duk7fO; ya9RAwdL6SrP = ya9RAwdL6SrP + (801 - 800)) {
            if (YOqhg8m[wgwzrdY][ya9RAwdL6SrP] > saJ9FiCf)
                saJ9FiCf = YOqhg8m[wgwzrdY][ya9RAwdL6SrP];
        }
        for (ya9RAwdL6SrP = (955 - 955); ya9RAwdL6SrP < duk7fO; ya9RAwdL6SrP = ya9RAwdL6SrP + (438 - 437)) {
            if (YOqhg8m[wgwzrdY][ya9RAwdL6SrP] == saJ9FiCf)
                D3auTPG = ya9RAwdL6SrP;
        }
        for (ya9RAwdL6SrP = (150 - 150); ya9RAwdL6SrP < D9pRcJF2y; ya9RAwdL6SrP = ya9RAwdL6SrP + (232 - 231)) {
            if (YOqhg8m[ya9RAwdL6SrP][D3auTPG] < saJ9FiCf) {
                H6wmKp = (601 - 600);
                break;
            }
        }
        if (H6wmKp == (290 - 290)) {
            flag2 = 1;
            printf ("%d+%d", wgwzrdY, D3auTPG);
            break;
        }
    }
    if (flag2 == 0)
        printf ("No");
}

