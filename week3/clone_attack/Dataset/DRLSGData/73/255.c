main () {
    int y5RohmLP;
    int swfjzJcn;
    int AghGTnsWDXt;
    int YWVc5JfwS;
    int aKzDwCNk [(480 - 475)] = {(238 - 238), (709 - 709), (588 - 588), (185 - 185), (889 - 889)};
    int gIbmenHg7Sk4 [(167 - 162)] = {(117 - 117), (114 - 114), (271 - 271), (783 - 783), (454 - 454)};
    int eKbNPnh0qEz [(812 - 807)] [(755 - 750)];
    swfjzJcn = (629 - 628);
    y5RohmLP = (661 - 661);
    for (YWVc5JfwS = (585 - 585); (959 - 954) > YWVc5JfwS; YWVc5JfwS = YWVc5JfwS +(285 - 284)) {
        for (AghGTnsWDXt = (442 - 442); (744 - 739) > AghGTnsWDXt; AghGTnsWDXt = AghGTnsWDXt +(486 - 485))
            eKbNPnh0qEz[YWVc5JfwS][AghGTnsWDXt] = (340 - 340);
    }
    for (YWVc5JfwS = (762 - 762); (147 - 142) > YWVc5JfwS; YWVc5JfwS = YWVc5JfwS +(311 - 310)) {
        for (AghGTnsWDXt = (324 - 324); (392 - 387) > AghGTnsWDXt; AghGTnsWDXt = AghGTnsWDXt +(618 - 617))
            scanf ("%d", &eKbNPnh0qEz[YWVc5JfwS][AghGTnsWDXt]);
    }
    for (YWVc5JfwS = (810 - 810); (112 - 107) > YWVc5JfwS; YWVc5JfwS = YWVc5JfwS +(478 - 477)) {
        for (AghGTnsWDXt = (637 - 637); (212 - 207) > AghGTnsWDXt; AghGTnsWDXt = AghGTnsWDXt +(150 - 149)) {
            if (eKbNPnh0qEz[YWVc5JfwS][AghGTnsWDXt] > gIbmenHg7Sk4[YWVc5JfwS]) {
                gIbmenHg7Sk4[YWVc5JfwS] = eKbNPnh0qEz[YWVc5JfwS][AghGTnsWDXt];
                aKzDwCNk[YWVc5JfwS] = AghGTnsWDXt;
            }
        }
    }
    for (YWVc5JfwS = (308 - 308); (329 - 324) > YWVc5JfwS; YWVc5JfwS = YWVc5JfwS +1) {
        for (AghGTnsWDXt = (638 - 638); 5 > AghGTnsWDXt; AghGTnsWDXt++) {
            if (eKbNPnh0qEz[AghGTnsWDXt][aKzDwCNk[YWVc5JfwS]] < gIbmenHg7Sk4[YWVc5JfwS]) {
                swfjzJcn = (804 - 804);
                break;
            }
        }
        if (swfjzJcn == (549 - 548)) {
            printf ("%d %d %d\n", YWVc5JfwS +(744 - 743), aKzDwCNk[YWVc5JfwS] + (625 - 624), gIbmenHg7Sk4[YWVc5JfwS]);
            y5RohmLP = 1;
        }
        swfjzJcn = 1;
    }
    if (y5RohmLP == 0)
        printf ("not found");
}

