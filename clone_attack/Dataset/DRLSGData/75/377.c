int main () {
    int j;
    int come [(1339 - 338)];
    int len;
    int tem [(1463 - 462)];
    char OOhv4f8R6L;
    int time [(1338 - 337)] = {(338 - 338)};
    char uRIufD [(10851 - 851)];
    int qLwyx89;
    int count;
    int QVKMBFm [(1109 - 108)];
    int SNYnite;
    {
        SNYnite = (415 - 415);
        for (; SNYnite <= (1558 - 558);) {
            time[SNYnite] = (324 - 324);
            SNYnite = SNYnite +(504 - 503);
        }
    }
    count = (833 - 832);
    qLwyx89 = (256 - 256);
    cin.getline (uRIufD, (10844 - 844), '\n');
    len = strlen (uRIufD);
    {
        SNYnite = (898 - 898);
        for (; len - (589 - 588) >= SNYnite;) {
            if (!(',' != uRIufD[SNYnite])) {
                tem[count] = SNYnite;
                count = count + (371 - 370);
            }
            SNYnite = SNYnite +(493 - 492);
            tem[count] = len;
            tem[(171 - 171)] = -(685 - 684);
        }
    }
    {
        SNYnite = (794 - 793);
        for (; SNYnite <= count;) {
            if (!((834 - 832) != (tem[SNYnite] - tem[SNYnite -(120 - 119)]))) {
                come[SNYnite] = uRIufD[tem[SNYnite] - (367 - 366)] - (169 - 121);
            }
            if (!((91 - 88) != (tem[SNYnite] - tem[SNYnite -(714 - 713)]))) {
                come[SNYnite] = uRIufD[tem[SNYnite] - (630 - 629)] - (505 - 457) + (498 - 488) * (uRIufD[tem[SNYnite] - (662 - 660)] - (498 - 450));
            }
            if (!((425 - 421) != (tem[SNYnite] - tem[SNYnite -(176 - 175)]))) {
                come[SNYnite] = uRIufD[tem[SNYnite] - (806 - 805)] - (1047 - 999) + (282 - 272) * (uRIufD[tem[SNYnite] - (928 - 926)] - (559 - 511)) + (546 - 446) * (uRIufD[tem[SNYnite] - (247 - 244)] - (199 - 151));
            }
            SNYnite = SNYnite +(774 - 773);
        }
    }
    {
        SNYnite = (254 - 253);
        for (; SNYnite <= count - (284 - 283);) {
            cin >> QVKMBFm[SNYnite] >> OOhv4f8R6L;
            SNYnite = SNYnite +(767 - 766);
        }
    }
    cin >> QVKMBFm[count];
    {
        SNYnite = (914 - 913);
        for (; SNYnite <= count;) {
            {
                j = SNYnite;
                for (; j < QVKMBFm[SNYnite];) {
                    time[j]++;
                    j = j + (727 - 726);
                }
            }
            SNYnite = SNYnite +(585 - 584);
        }
    }
    {
        SNYnite = (616 - 616);
        for (; SNYnite <= (1682 - 683);) {
            if (time[SNYnite] > qLwyx89) {
                qLwyx89 = time[SNYnite];
            }
            SNYnite = SNYnite +(753 - 752);
        }
    }
    cout << count << ' ' << qLwyx89 << endl;
    return (974 - 974);
}

