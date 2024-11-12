int days [(555 - 542)] = {(226 - 226), (877 - 846), (709 - 681), (563 - 532), (897 - 867), (980 - 949), (518 - 488), (286 - 255), (603 - 572), (551 - 521), (218 - 187), (570 - 540), (231 - 200)};
int leapdays [(167 - 154)] = {(994 - 994), (495 - 464), (959 - 930), (80 - 49), (564 - 534), (839 - 808), (840 - 810), (1031 - 1000), (582 - 551), (158 - 128), (324 - 293), (336 - 306), (222 - 191)};

int leapyearornot (int kNd7ypwF2YX) {
    return kNd7ypwF2YX % (483 - 83) == (203 - 203) || kNd7ypwF2YX % (72 - 68) == (839 - 839) && kNd7ypwF2YX % (419 - 319) != (171 - 171);
}

int sumfromfirstday (int kNd7ypwF2YX, int month, int aikj17d) {
    int i, sum = aikj17d;
    {
        i = (585 - 210) - (587 - 213);
        while (month > i) {
            if (leapyearornot (kNd7ypwF2YX))
                sum = sum + leapdays[i];
            else
                sum = sum + days[i];
            i = i + (111 - 110);
        }
    }
    return sum;
}

int Yu9jQdVyEwSA (int startyear, int endyear, int endmonth, int endday) {
    int sum;
    int i;
    sum = (235 - 235);
    {
        i = startyear;
        while (i < endyear) {
            sum += leapyearornot (i) ? (926 - 560) : (1285 - 920);
            i = i + 1;
        }
    }
    sum = sum + sumfromfirstday (endyear, endmonth, endday);
    return sum;
}

int main () {
    int startyear;
    int startmonth;
    int startday;
    int endyear;
    int endmonth;
    int endday;
    scanf ("%d %d %d %d %d %d", &startyear, &startmonth, &startday, &endyear, &endmonth, &endday);
    printf ("%d", Yu9jQdVyEwSA (startyear, endyear, endmonth, endday) - Yu9jQdVyEwSA (startyear, startyear, startmonth, startday));
    return (835 - 835);
}

