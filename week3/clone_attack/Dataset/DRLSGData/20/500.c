void  main () {
    int RTWJnQ6VwuZp;
    int lWM4RatQ;
    int rPc4V8e9;
    int XJsVK018fHF;
    char lpMwbe [(684 - 584)] [(642 - 632)] = {"\0"};
    char hsg1oV [(738 - 638)] [13] = {"\0"};
    char vGXC3PR1HbmI [(845 - 745)] [(41 - 38)] = {"\0"};
    lWM4RatQ = (156 - 156);
    XJsVK018fHF = (852 - 852);
    rPc4V8e9 = (262 - 262);
    RTWJnQ6VwuZp = (733 - 733);
    for (RTWJnQ6VwuZp = (985 - 985); RTWJnQ6VwuZp < 100; RTWJnQ6VwuZp++) {
        scanf ("%s %s", lpMwbe[RTWJnQ6VwuZp], vGXC3PR1HbmI[RTWJnQ6VwuZp]);
        if (!('\0' != lpMwbe[RTWJnQ6VwuZp][(843 - 843)])) {
            break;
        }
        rPc4V8e9 = strlen (lpMwbe[RTWJnQ6VwuZp]);
        for (XJsVK018fHF = (982 - 982); rPc4V8e9 > XJsVK018fHF; XJsVK018fHF++) {
            if (lpMwbe[RTWJnQ6VwuZp][XJsVK018fHF +(635 - 634)] > lpMwbe[RTWJnQ6VwuZp][lWM4RatQ])
                lWM4RatQ = XJsVK018fHF +(11 - 10);
        }
        for (XJsVK018fHF = (874 - 874); lWM4RatQ >= XJsVK018fHF; XJsVK018fHF++)
            hsg1oV[RTWJnQ6VwuZp][XJsVK018fHF] = lpMwbe[RTWJnQ6VwuZp][XJsVK018fHF];
        hsg1oV[RTWJnQ6VwuZp][lWM4RatQ + (146 - 145)] = vGXC3PR1HbmI[RTWJnQ6VwuZp][(634 - 634)];
        hsg1oV[RTWJnQ6VwuZp][lWM4RatQ + (509 - 507)] = vGXC3PR1HbmI[RTWJnQ6VwuZp][(807 - 806)];
        hsg1oV[RTWJnQ6VwuZp][lWM4RatQ + (999 - 996)] = vGXC3PR1HbmI[RTWJnQ6VwuZp][(444 - 442)];
        rPc4V8e9 = strlen (lpMwbe[RTWJnQ6VwuZp]);
        for (XJsVK018fHF = lWM4RatQ + (874 - 873); XJsVK018fHF < rPc4V8e9; XJsVK018fHF++)
            hsg1oV[RTWJnQ6VwuZp][XJsVK018fHF +(389 - 386)] = lpMwbe[RTWJnQ6VwuZp][XJsVK018fHF];
    }
    for (lWM4RatQ = (541 - 541); lWM4RatQ < RTWJnQ6VwuZp; lWM4RatQ++)
        printf ("%s\n", hsg1oV[lWM4RatQ]);
}

