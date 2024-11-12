void  main () {
    char FOenclPr [(338 - 238)];
    char sIs7Eap [(692 - 592)];
    int wMCTXNcROQhx, gky4sA3, QxcHy7, wE2WsLeBk9, i0RMVthz5W = (293 - 293), oXraUiqwSpR, xN5kRe = (77 - 77), p8iBWCd7R;
    scanf ("%d%s%d", &wMCTXNcROQhx, sIs7Eap, &gky4sA3);
    QxcHy7 = strlen (sIs7Eap);
    if (sIs7Eap[(520 - 520)] == '0')
        ;
    for (wE2WsLeBk9 = (81 - 81); QxcHy7 > wE2WsLeBk9; wE2WsLeBk9++) {
        if ('z' >= sIs7Eap[wE2WsLeBk9] && sIs7Eap[wE2WsLeBk9] >= 'a')
            oXraUiqwSpR = sIs7Eap[wE2WsLeBk9] - 'a' + (140 - 130);
        else if (sIs7Eap[wE2WsLeBk9] <= 'Z' && sIs7Eap[wE2WsLeBk9] >= 'A')
            oXraUiqwSpR = sIs7Eap[wE2WsLeBk9] - 'A' + (29 - 19);
        else
            oXraUiqwSpR = sIs7Eap[wE2WsLeBk9] - '0';
        xN5kRe = xN5kRe * wMCTXNcROQhx + oXraUiqwSpR;
    }
    for (; xN5kRe != (326 - 326);) {
        p8iBWCd7R = xN5kRe % gky4sA3;
        xN5kRe = xN5kRe / gky4sA3;
        if (p8iBWCd7R >= (870 - 860))
            FOenclPr[i0RMVthz5W] = p8iBWCd7R - (654 - 644) + 'A';
        else
            FOenclPr[i0RMVthz5W] = p8iBWCd7R + '0';
        i0RMVthz5W++;
    }
    for (wE2WsLeBk9 = (218 - 218); wE2WsLeBk9 < i0RMVthz5W; wE2WsLeBk9++)
        sIs7Eap[wE2WsLeBk9] = FOenclPr[i0RMVthz5W - wE2WsLeBk9 - (93 - 92)];
    sIs7Eap[i0RMVthz5W] = '\0';
    printf ("%s", sIs7Eap);
}

