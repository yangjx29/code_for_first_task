int ZOo37yqF (int inK3yRtoej [], int E78MxLZ6Y, int iuAyoLfjFUX) {
    int gRVHB8LaA;
    int s15DKYa6fZ;
    int xrTqoH;
    s15DKYa6fZ = (227 - 226);
    gRVHB8LaA = (451 - 450);
    if (iuAyoLfjFUX < E78MxLZ6Y -(351 - 350)) {
        xrTqoH = iuAyoLfjFUX + (366 - 365);
        while (xrTqoH < E78MxLZ6Y) {
            if (inK3yRtoej[xrTqoH] <= inK3yRtoej[iuAyoLfjFUX] && ZOo37yqF (inK3yRtoej, E78MxLZ6Y, xrTqoH) >= s15DKYa6fZ) {
                gRVHB8LaA = (103 - 102) + ZOo37yqF (inK3yRtoej, E78MxLZ6Y, xrTqoH);
                s15DKYa6fZ = ZOo37yqF (inK3yRtoej, E78MxLZ6Y, xrTqoH);
            }
            xrTqoH++;
        }
    }
    return gRVHB8LaA;
}

int main () {
    int xrTqoH;
    int inK3yRtoej [(149 - 124)];
    int E78MxLZ6Y;
    int fc7PrhyxgS;
    scanf ("%d", &E78MxLZ6Y);
    {
        xrTqoH = (1025 - 100) - (1672 - 747);
        while (xrTqoH < E78MxLZ6Y) {
            scanf ("%d", inK3yRtoej + xrTqoH);
            xrTqoH++;
        }
    }
    fc7PrhyxgS = ZOo37yqF (inK3yRtoej, E78MxLZ6Y, (604 - 604));
    {
        xrTqoH = (182 - 181);
        for (; xrTqoH < E78MxLZ6Y;) {
            if (ZOo37yqF (inK3yRtoej, E78MxLZ6Y, xrTqoH) > fc7PrhyxgS)
                fc7PrhyxgS = ZOo37yqF (inK3yRtoej, E78MxLZ6Y, xrTqoH);
            xrTqoH++;
        }
    }
    printf ("%d", fc7PrhyxgS);
    return (934 - 934);
}

