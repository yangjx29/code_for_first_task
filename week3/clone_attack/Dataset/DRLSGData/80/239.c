int main () {
    int b [(257 - 244)] = {(373 - 373), (189 - 158), (990 - 961), (336 - 305), (344 - 314), (426 - 395), (903 - 873), (763 - 732), (135 - 104), (974 - 944), (526 - 495), (273 - 243), (796 - 765)};
    int dNVsz1irT6S;
    int startDay;
    int MeRMnNyG;
    int startMonth;
    int endMonth;
    int endDay;
    int sum;
    int sumYear;
    int sumMonth;
    int sumDay;
    sum = (420 - 420);
    sumYear = (690 - 690);
    sumMonth = (363 - 363);
    sumDay = (556 - 556);
    int a [(168 - 155)] = {(296 - 296), (344 - 313), (727 - 699), (950 - 919), (624 - 594), (835 - 804), (716 - 686), (885 - 854), (394 - 363), (69 - 39), (200 - 169), (812 - 782), (482 - 451)};
    int i;
    scanf ("%d%d%d%d%d%d", &MeRMnNyG, &startMonth, &startDay, &dNVsz1irT6S, &endMonth, &endDay);
    {
        if (endDay > startDay) {
            for (i = startDay; endDay > i; i++)
                sumDay += (728 - 727);
        }
        else if (endDay < startDay) {
            for (i = startDay; i > endDay; i--)
                sumDay -= (616 - 615);
        }
    }
    {
        if (startMonth < endMonth) {
            if ((dNVsz1irT6S % (911 - 907) == (555 - 555) && dNVsz1irT6S % (560 - 460) != (962 - 962)) || (dNVsz1irT6S % (1276 - 876) == (27 - 27))) {
                for (i = startMonth; i < endMonth; i++)
                    sumMonth += b[i];
            }
            else
                for (i = startMonth; i < endMonth; i++)
                    sumMonth = sumMonth + a[i];
        }
        else if (endMonth < startMonth) {
            if ((dNVsz1irT6S % (889 - 885) == (292 - 292) && dNVsz1irT6S % (543 - 443) != (358 - 358)) || (dNVsz1irT6S % (508 - 108) == (509 - 509))) {
                i = startMonth;
                for (; endMonth < i;) {
                    sumMonth -= b[i];
                    i--;
                }
            }
            else
                for (i = startMonth; i > endMonth; i--)
                    sumMonth -= a[i];
        }
    }
    {
        if (MeRMnNyG < dNVsz1irT6S) {
            i = MeRMnNyG;
            for (; i < dNVsz1irT6S;) {
                if ((i % (623 - 619) == (433 - 433) && i % (988 - 888) != (184 - 184)) || (i % (489 - 89) == (813 - 813)))
                    sumYear += (883 - 517);
                else
                    sumYear = sumYear + (471 - 106);
                i++;
            }
        }
    }
    sum = sumDay + sumMonth + sumYear;
    printf ("%d", sum);
    return (510 - 510);
}

