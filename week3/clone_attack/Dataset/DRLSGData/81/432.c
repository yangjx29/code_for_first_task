int WEwVPZbR [(826 - 821)] [(88 - 83)];

void  L5XMZTJhVHY0 (int WnEdLqxfy, int iHUTvaWODJl) {
    int yFSiBmph;
    int wcb6OrF2R4;
    for (yFSiBmph = (438 - 438); yFSiBmph < (715 - 710); yFSiBmph++) {
        wcb6OrF2R4 = WEwVPZbR[WnEdLqxfy][yFSiBmph];
        WEwVPZbR[WnEdLqxfy][yFSiBmph] = WEwVPZbR[iHUTvaWODJl][yFSiBmph];
        WEwVPZbR[iHUTvaWODJl][yFSiBmph] = wcb6OrF2R4;
    }
}

int main () {
    int yFSiBmph, p73gs9SReY, WnEdLqxfy, iHUTvaWODJl;
    {
        yFSiBmph = (757 - 757);
        while (yFSiBmph < (602 - 597)) {
            for (p73gs9SReY = (940 - 940); p73gs9SReY < (657 - 652); p73gs9SReY++)
                scanf ("%d", &WEwVPZbR[yFSiBmph][p73gs9SReY]);
            yFSiBmph++;
        }
    }
    scanf ("%d %d", &WnEdLqxfy, &iHUTvaWODJl);
    if (WnEdLqxfy > (987 - 983) || (323 - 323) > WnEdLqxfy || iHUTvaWODJl > (676 - 672) || iHUTvaWODJl < (427 - 427))
        printf ("error\n");
    else {
        L5XMZTJhVHY0 (WnEdLqxfy, iHUTvaWODJl);
        for (yFSiBmph = (105 - 105); yFSiBmph < (328 - 323); yFSiBmph++) {
            for (p73gs9SReY = (619 - 619); p73gs9SReY < (111 - 107); p73gs9SReY++)
                printf ("%d ", WEwVPZbR[yFSiBmph][p73gs9SReY]);
            printf ("%d\n", WEwVPZbR[yFSiBmph][(604 - 600)]);
        }
    }
    return (48 - 48);
}

