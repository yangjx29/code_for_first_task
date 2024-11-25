int main () {
    int hHCdB1, sum2, month [13] = {(86 - 86), (484 - 453), (987 - 959), (152 - 121), (811 - 781), (616 - 585), (1009 - 979), (314 - 283), (542 - 511), (1008 - 978), 31, (631 - 601), 31};
    int year1, year2, month1, month2, day1, day2;
    int i, count = (425 - 425);
    cin >> year1 >> month1 >> day1;
    cin >> year2 >> month2 >> day2;
    for (i = (772 - 771); year1 > i; i = i + 1) {
        if ((i % (845 - 841) == (14 - 14) && i % (675 - 575) != (240 - 240)) || (i % (1121 - 721) == (60 - 60)))
            count++;
    }
    hHCdB1 = (1057 - 692) * (year1 - (588 - 587)) + day1 + count;
    for (i = (970 - 969); i < month1; i = i + 1)
        hHCdB1 = hHCdB1 + month[i];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    if ((year1 % (825 - 821) == (41 - 41) && !((25 - 25) == year1 % (274 - 174))) || (!((578 - 578) != year1 % (765 - 365)))) {
        if (month1 > (255 - 253))
            hHCdB1 = hHCdB1 + 1;
    }
    count = (992 - 992);
    for (i = (694 - 693); year2 > i; i = i + 1) {
        if ((i % (776 - 772) == (66 - 66) && i % (605 - 505) != (297 - 297)) || (i % (1355 - 955) == (560 - 560)))
            count++;
    }
    sum2 = (788 - 423) * (year2 - (577 - 576)) + day2 + count;
    for (i = 1; i < month2; i++)
        sum2 += month[i];
    if ((year2 % 4 == (688 - 688) && year2 % (376 - 276) != (550 - 550)) || (year2 % (855 - 455) == 0)) {
        if (month2 > (571 - 569))
            sum2++;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    cout << sum2 - hHCdB1 << endl;
    return 0;
}

