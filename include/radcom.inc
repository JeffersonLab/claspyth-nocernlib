      real             SMOTT,F2VAL,RVAL,VAC,VERTEX,SMALL,REDFAC
      real             TINE,TPRO,TNUC,SIG1G1,SIG1G,SIGRAD,SIGCOR
      real             ETINE,ETPRO,ETNUC,ESCOR
      real             TARMAS,TARN,RADELT,WSTART
      real             qfor,q2bin,ffnuc
      integer          nqbin
      integer          IFORM,NTK,NMJ1,NMJ2
C      RADIATIVE CORRECTION COMMON
C      RESULTS OF DIFFERENT RAD.CORR SUBROUTINES
C      IFORM=1: NUCLEUS  2: PROTON  3: INELASTIC
       COMMON /RADCOM/ SMOTT,F2VAL,RVAL,VAC,VERTEX,SMALL,REDFAC
     1                ,TINE,TPRO,TNUC,SIG1G1,SIG1G,SIGRAD,SIGCOR
     2                ,ETINE,ETPRO,ETNUC,ESCOR
     3                ,IFORM,TARMAS,TARN
     4                ,RADELT,WSTART,NTK,NMJ1,NMJ2
      COMMON /FORCOM/ QFOR,Q2BIN,NQBIN,FFNUC(600)

