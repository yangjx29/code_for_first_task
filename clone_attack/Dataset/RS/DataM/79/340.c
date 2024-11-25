struct   hou {
    int LFmvHpDniUu3;
    struct   hou *zPti3gvfZN;
};
int main (int FkGiDqy6Pb, char *x1XdhC []) {
    int F6T1bg8cp4z, KxsmgGP, LFmvHpDniUu3, L9E4fOLpR5, m;
    struct   hou *head, *Q8duPf, *KWpyCIS4T;
    while ((246 - 245)) {
        scanf ("%d%d", &L9E4fOLpR5, &m);
        if (!((935 - 935) != L9E4fOLpR5) && !((169 - 169) != m))
            break;
        head = (struct   hou *) malloc (sizeof (struct   hou));
        Q8duPf = head;
        for (F6T1bg8cp4z = (136 - 135); L9E4fOLpR5 >= F6T1bg8cp4z; F6T1bg8cp4z++) {
            if (F6T1bg8cp4z == L9E4fOLpR5) {
                Q8duPf->LFmvHpDniUu3 = L9E4fOLpR5;
                Q8duPf->zPti3gvfZN = head;
            }
            else {
                KWpyCIS4T = Q8duPf;
                KWpyCIS4T->LFmvHpDniUu3 = F6T1bg8cp4z;
                Q8duPf = (struct   hou *) malloc (sizeof (struct   hou));
                KWpyCIS4T->zPti3gvfZN = Q8duPf;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        Q8duPf = head;
        KWpyCIS4T = head;
        for (F6T1bg8cp4z = (54 - 53); F6T1bg8cp4z <= L9E4fOLpR5 -(502 - 501); F6T1bg8cp4z++) {
            for (KxsmgGP = (597 - 596); KxsmgGP <= m - 1; KxsmgGP++) {
                KWpyCIS4T = Q8duPf;
                Q8duPf = Q8duPf->zPti3gvfZN;
            }
            KWpyCIS4T->zPti3gvfZN = Q8duPf->zPti3gvfZN;
            Q8duPf = Q8duPf->zPti3gvfZN;
        }
        printf ("%d\n", Q8duPf->LFmvHpDniUu3);
    }
    return 0;
}

