#ifndef __mmaccelsearch_cmd__
#define __mmaccelsearch_cmd__
/*****
  command line parser interface -- generated by clig 
  (http://wsd.iitb.fhg.de/~kir/clighome/)

  The command line parser `clig':
  (C) 1995---2001 Harald Kirsch (kirschh@lionbioscience.com)
*****/

typedef struct s_Cmdline {
  /***** -lobin: The first Fourier frequency in the data file */
  char lobinP;
  int lobin;
  int lobinC;
  /***** -numharm: The number of harmonics to sum (power-of-two) */
  char numharmP;
  int numharm;
  int numharmC;
  /***** -zmax: The max (+ and -) Fourier freq deriv to search */
  char zmaxP;
  int zmax;
  int zmaxC;
  /***** -sigma: Cutoff sigma for choosing candidates */
  char sigmaP;
  float sigma;
  int sigmaC;
  /***** -rlo: The lowest Fourier frequency to search */
  char rloP;
  double rlo;
  int rloC;
  /***** -rhi: The highest Fourier frequency to search */
  char rhiP;
  double rhi;
  int rhiC;
  /***** -flo: The lowest frequency (Hz) to search */
  char floP;
  double flo;
  int floC;
  /***** -fhi: The highest frequency (Hz) to search */
  char fhiP;
  double fhi;
  int fhiC;
  /***** -photon: Data is poissonian so use freq 0 as power normalization */
  char photonP;
  /***** -zapfile: A file of freqs and widths to zap from the FFT (when using '-zap') */
  char zapfileP;
  char* zapfile;
  int zapfileC;
  /***** -baryv: The radial velocity component (v/c) towards the target during the obs */
  char baryvP;
  double baryv;
  int baryvC;
  /***** uninterpreted command line parameters */
  int argc;
  /*@null*/char **argv;
  /***** the whole command line concatenated */
  char *full_cmd_line;
} Cmdline;


extern char *Program;
extern void usage(void);
extern /*@shared*/Cmdline *parseCmdline(int argc, char **argv);

extern void showOptionValues(void);

#endif
