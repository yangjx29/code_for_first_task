struct   student {
    char QhOoWVfsRw0U [(1066 - 66)];
    struct   student *XP3gaR;
};
void  main () {
    struct   student *EuhjFQ6n;
    struct   student *lRPjEHwgs;
    struct   student *r0DmIY2bx4;
    lRPjEHwgs = EuhjFQ6n = (struct   student *) malloc (LEN);
    lRPjEHwgs->XP3gaR = NULL;
    gets (lRPjEHwgs->QhOoWVfsRw0U);
    for (; strcmp (lRPjEHwgs->QhOoWVfsRw0U, "end");) {
        r0DmIY2bx4 = (struct   student *) malloc (LEN);
        r0DmIY2bx4->XP3gaR = lRPjEHwgs;
        lRPjEHwgs = r0DmIY2bx4;
        gets (lRPjEHwgs->QhOoWVfsRw0U);
    }
    for (; lRPjEHwgs->XP3gaR != NULL;) {
        lRPjEHwgs = lRPjEHwgs->XP3gaR;
        printf ("%s\n", lRPjEHwgs->QhOoWVfsRw0U);
    }
}

