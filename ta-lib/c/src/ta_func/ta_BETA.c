/* TA-LIB Copyright (c) 1999-2008, Mario Fortier
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or
 * without modification, are permitted provided that the following
 * conditions are met:
 *
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 *
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in
 *   the documentation and/or other materials provided with the
 *   distribution.
 *
 * - Neither name of author nor the names of its contributors
 *   may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * REGENTS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/* List of contributors:
 *
 *  Initial  Name/description
 *  -------------------------------------------------------------------
 *  MW       Michael Williamson
 *
 *
 * Change history:
 *
 *  MMDDYY BY   Description
 *  -------------------------------------------------------------------
 *  122006 MW   Initial Version
 */

/**** START GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
/* All code within this section is automatically
 * generated by gen_code. Any modification will be lost
 * next time gen_code is run.
 */
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */    #include "TA-Lib-Core.h"
/* Generated */    #define TA_INTERNAL_ERROR(Id) (RetCode::InternalError)
/* Generated */    namespace TicTacTec { namespace TA { namespace Library {
/* Generated */ #elif defined( _JAVA )
/* Generated */    #include "ta_defs.h"
/* Generated */    #include "ta_java_defs.h"
/* Generated */    #define TA_INTERNAL_ERROR(Id) (RetCode.InternalError)
/* Generated */ #else
/* Generated */    #include <string.h>
/* Generated */    #include <math.h>
/* Generated */    #include "ta_func.h"
/* Generated */ #endif
/* Generated */ 
/* Generated */ #ifndef TA_UTILITY_H
/* Generated */    #include "ta_utility.h"
/* Generated */ #endif
/* Generated */ 
/* Generated */ #ifndef TA_MEMORY_H
/* Generated */    #include "ta_memory.h"
/* Generated */ #endif
/* Generated */ 
/* Generated */ #define TA_PREFIX(x) TA_##x
/* Generated */ #define INPUT_TYPE   double
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::BetaLookback( int           optInTimePeriod )  /* From 1 to 100000 */
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int betaLookback( int           optInTimePeriod )  /* From 1 to 100000 */
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_BETA_Lookback( int           optInTimePeriod )  /* From 1 to 100000 */
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */

/**** START GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */    /* min/max are checked for optInTimePeriod. */
/* Generated */    if( (int)optInTimePeriod == TA_INTEGER_DEFAULT )
/* Generated */       optInTimePeriod = 5;
/* Generated */    else if( ((int)optInTimePeriod < 1) || ((int)optInTimePeriod > 100000) )
/* Generated */       return -1;
/* Generated */ 
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/**** END GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/
   return optInTimePeriod;
}

/**** START GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
/*
 * TA_BETA - Beta
 * 
 * Input  = double, double
 * Output = double
 * 
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 1 to 100000)
 *    Number of period
 * 
 * 
 */
/* Generated */ 
/* Generated */ #if defined( _MANAGED ) && defined( USE_SUBARRAY )
/* Generated */ enum class Core::RetCode Core::Beta( int    startIdx,
/* Generated */                                      int    endIdx,
/* Generated */                                      SubArray<double>^ inReal0,
/* Generated */                                      SubArray<double>^ inReal1,
/* Generated */                                      int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                                      [Out]int%    outBegIdx,
/* Generated */                                      [Out]int%    outNBElement,
/* Generated */                                      SubArray<double>^  outReal )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::Beta( int    startIdx,
/* Generated */                                      int    endIdx,
/* Generated */                                      cli::array<double>^ inReal0,
/* Generated */                                      cli::array<double>^ inReal1,
/* Generated */                                      int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                                      [Out]int%    outBegIdx,
/* Generated */                                      [Out]int%    outNBElement,
/* Generated */                                      cli::array<double>^  outReal )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode beta( int    startIdx,
/* Generated */                      int    endIdx,
/* Generated */                      double       inReal0[],
/* Generated */                      double       inReal1[],
/* Generated */                      int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                      MInteger     outBegIdx,
/* Generated */                      MInteger     outNBElement,
/* Generated */                      double        outReal[] )
/* Generated */ #else
/* Generated */ TA_LIB_API TA_RetCode TA_BETA( int    startIdx,
/* Generated */                                int    endIdx,
/* Generated */                                           const double inReal0[],
/* Generated */                                           const double inReal1[],
/* Generated */                                           int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                                           int          *outBegIdx,
/* Generated */                                           int          *outNBElement,
/* Generated */                                           double        outReal[] )
/* Generated */ #endif
/**** END GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
{
    double S_xx = 0.0f; /* sum of x * x */
    double S_xy = 0.0f; /* sum of x * y */
    double S_x = 0.0f; /* sum of x */
    double S_y = 0.0f; /* sum of y */
    double last_price_x = 0.0f; /* the last price read from inReal0 */
    double last_price_y = 0.0f; /* the last price read from inReal1 */
    double trailing_last_price_x = 0.0f; /* same as last_price_x except used to remove elements from the trailing summation */
    double trailing_last_price_y = 0.0f; /* same as last_price_y except used to remove elements from the trailing summation */
    double tmp_real = 0.0f; /* temporary variable */
    double x; /* the 'x' value, which is the last change between values in inReal0 */
    double y; /* the 'y' value, which is the last change between values in inReal1 */
    double n = 0.0f;
    int i, outIdx;
    int trailingIdx, nbInitialElementNeeded;


/**** START GENCODE SECTION 4 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    /* Validate the requested output range. */
/* Generated */    if( startIdx < 0 )
/* Generated */       return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_START_INDEX,OutOfRangeStartIndex);
/* Generated */    if( (endIdx < 0) || (endIdx < startIdx))
/* Generated */       return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_END_INDEX,OutOfRangeEndIndex);
/* Generated */ 
/* Generated */    #if !defined(_JAVA)
/* Generated */    if( !inReal0 ) return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    if( !inReal1 ) return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    #endif /* !defined(_JAVA)*/
/* Generated */    /* min/max are checked for optInTimePeriod. */
/* Generated */    if( (int)optInTimePeriod == TA_INTEGER_DEFAULT )
/* Generated */       optInTimePeriod = 5;
/* Generated */    else if( ((int)optInTimePeriod < 1) || ((int)optInTimePeriod > 100000) )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #if !defined(_JAVA)
/* Generated */    if( !outReal )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA) */
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 4 - DO NOT DELETE THIS LINE ****/

   /* Insert TA function code here. */

   /** DESCRIPTION OF ALGORITHM:
    *   The Beta 'algorithm' is a measure of a stocks volatility vs from index. The stock prices
    *   are given in inReal0 and the index prices are give in inReal1. The size of these vectors
    *   should be equal. The algorithm is to calculate the change between prices in both vectors
    *   and then 'plot' these changes are points in the Euclidean plane. The x value of the point
    *   is market return and the y value is the security return. The beta value is the slope of a
    *   linear regression through these points. A beta of 1 is simple the line y=x, so the stock
    *   varies percisely with the market. A beta of less than one means the stock varies less than
    *   the market and a beta of more than one means the stock varies more than market. A related
    *   value is the Alpha value (see TA_ALPHA) which is the Y-intercept of the same linear regression.
    */

   /* Validate the calculation method type and
    * identify the minimum number of input
    * consume before the first value is output..
    */
   nbInitialElementNeeded = optInTimePeriod;

   /* Move up the start index if there is not
    * enough initial data.
    */
   if( startIdx < nbInitialElementNeeded )
      startIdx = nbInitialElementNeeded;

   /* Make sure there is still something to evaluate. */
   if( startIdx > endIdx )
   {
      VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
      VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
      return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
   }   

   /* Consume first input. */
   trailingIdx = startIdx-nbInitialElementNeeded;
   last_price_x = trailing_last_price_x = inReal0[trailingIdx];
   last_price_y = trailing_last_price_y = inReal1[trailingIdx];

   /* Process remaining of lookback until ready to output the first value. */
   i = ++trailingIdx;

   while( i < startIdx )
   {
       tmp_real = inReal0[i];
       if( !TA_IS_ZERO(last_price_x) )
          x = (tmp_real-last_price_x)/last_price_x;
       else
          x = 0.0;
       last_price_x = tmp_real;

       tmp_real = inReal1[i++];
       if( !TA_IS_ZERO(last_price_y) )
          y = (tmp_real-last_price_y)/last_price_y;
       else
          y = 0.0;
       last_price_y = tmp_real;

       S_xx += x*x;
       S_xy += x*y;
       S_x += x;
       S_y += y;      
   }
   

   outIdx = 0; /* First output always start at index zero */
   n = (double)optInTimePeriod;
   do
   {
       tmp_real = inReal0[i];
       if( !TA_IS_ZERO(last_price_x) )
          x = (tmp_real-last_price_x)/last_price_x;
       else
          x = 0.0;
       last_price_x = tmp_real;

       tmp_real = inReal1[i++];
       if( !TA_IS_ZERO(last_price_y) )
          y = (tmp_real-last_price_y)/last_price_y;
       else
          y = 0.0;
       last_price_y = tmp_real;

       S_xx += x*x;
       S_xy += x*y;
       S_x += x;
       S_y += y;

       /* Always read the trailing before writing the output because the input and output
        * buffer can be the same.
        */
       tmp_real = inReal0[trailingIdx];
       if( !TA_IS_ZERO(trailing_last_price_x) )
          x = (tmp_real-trailing_last_price_x)/trailing_last_price_x;
       else
          x = 0.0;
       trailing_last_price_x = tmp_real;

       tmp_real = inReal1[trailingIdx++];
       if( !TA_IS_ZERO(trailing_last_price_y) )
          y = (tmp_real-trailing_last_price_y)/trailing_last_price_y;
       else
          y = 0.0;
       trailing_last_price_y = tmp_real;

       /* Write the output */
       tmp_real = (n * S_xx) - (S_x * S_x);
       if( !TA_IS_ZERO(tmp_real) )
          outReal[outIdx++] = ((n * S_xy) - (S_x * S_y)) / tmp_real;
       else
          outReal[outIdx++] = 0.0;

       /* Remove the calculation starting with the trailingIdx. */
       S_xx -= x*x;
       S_xy -= x*y;
       S_x -= x;
       S_y -= y;       
   } while( i <= endIdx );

   /* All done. Indicate the output limits and return. */
   VALUE_HANDLE_DEREF(outNBElement) = outIdx;
   VALUE_HANDLE_DEREF(outBegIdx) = startIdx;

   return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
}

/**** START GENCODE SECTION 5 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::BetaStateInit( struct TA_Beta_State** _state,
/* Generated */                        int           optInTimePeriod )  /* From 1 to 100000 */
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int betaStateInit( struct TA_beta_State** _state,
/* Generated */                         int           optInTimePeriod )  /* From 1 to 100000 */
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_BETA_StateInit( struct TA_BETA_State** _state,
/* Generated */                                            int           optInTimePeriod )  /* From 1 to 100000 */
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 5 - DO NOT DELETE THIS LINE ****/

{
   /* insert local variable here */

/**** START GENCODE SECTION 6 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    if (_state == NULL)
/* Generated */          return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    /* min/max are checked for optInTimePeriod. */
/* Generated */    if( (int)optInTimePeriod == TA_INTEGER_DEFAULT )
/* Generated */       optInTimePeriod = 5;
/* Generated */    else if( ((int)optInTimePeriod < 1) || ((int)optInTimePeriod > 100000) )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    STATE = TA_Calloc(1, sizeof(struct TA_BETA_State));
/* Generated */    STATE_P.mem_index = 0;
/* Generated */    STATE_P.optInTimePeriod = optInTimePeriod;
/* Generated */    MEM_SIZE_P = TA_BETA_Lookback(optInTimePeriod );
/* Generated */    #ifndef TA_BETA_SUPPRESS_MEMORY_ALLOCATION
/* Generated */    if (MEM_SIZE_P > 0)
/* Generated */          MEM_P = TA_Calloc(MEM_SIZE_P, sizeof(struct TA_BETA_Data));
/* Generated */    else
/* Generated */    #endif
/* Generated */          MEM_P = NULL;/* Generated */ 
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 6 - DO NOT DELETE THIS LINE ****/

   /* insert state init code here. */


   return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
}

/**** START GENCODE SECTION 7 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::BetaState( struct TA_Beta_State* _state,
/* Generated */                    cli::array<double>^ inReal0,
/* Generated */                    cli::array<double>^ inReal1,
/* Generated */                    cli::array<double>^  *outReal )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int betaState( struct TA_beta_State* _state,
/* Generated */                     double       inReal0,
/* Generated */                     double       inReal1,
/* Generated */                     double        *outReal )
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_BETA_State( struct TA_BETA_State* _state,
/* Generated */                                        const double inReal0,
/* Generated */                                        const double inReal1,
/* Generated */                                        double        *outReal )
/* Generated */ #endif
/**** END GENCODE SECTION 7 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */

/**** START GENCODE SECTION 8 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    if (_state == NULL)
/* Generated */          return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    #if !defined(_JAVA)
/* Generated */    /* Generated */    /* Generated */    #endif /* !defined(_JAVA)*/
/* Generated */    size_t _cur_idx = STATE.mem_index++;
/* Generated */    if (MEM_SIZE > 0) _cur_idx %= MEM_SIZE;
/* Generated */    UNUSED_VARIABLE(_cur_idx); // in case PUSH\POP methods won't be used
/* Generated */    #ifndef TA_BETA_SUPPRESS_EXIT_ON_NOT_ENOUGH_DATA
/* Generated */    if (NEED_MORE_DATA) {
/* Generated */          PUSH_TO_MEM(inReal0,inReal0);
/* Generated */          PUSH_TO_MEM(inReal1,inReal1);
/* Generated */    return ENUM_VALUE(RetCode,TA_NEED_MORE_DATA,NeedMoreData); }
/* Generated */    #endif
/* Generated */    #if !defined(_JAVA)
/* Generated */    if( !outReal )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA) */
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 8 - DO NOT DELETE THIS LINE ****/

   /* insert state based TA dunc code here. */

   return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
}

/**** START GENCODE SECTION 9 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::BetaStateFree( struct TA_Beta_State** _state )
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int betaStateFree( struct TA_beta_State** _state )
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_BETA_StateFree( struct TA_BETA_State** _state )
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 9 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */

/**** START GENCODE SECTION 10 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    if (_state == NULL)
/* Generated */          return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    if (STATE != NULL) {
/* Generated */          if (MEM_P != NULL) TA_Free(MEM_P);
/* Generated */          TA_Free(STATE); STATE = NULL;}
/* Generated */ 
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 10 - DO NOT DELETE THIS LINE ****/

   /* insert state free code here. */   
   return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
}

/**** START GENCODE SECTION 11 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #define  USE_SINGLE_PRECISION_INPUT
/* Generated */ #undef  TA_LIB_PRO
/* Generated */ #if !defined( _MANAGED ) && !defined( _JAVA )
/* Generated */    #undef   TA_PREFIX
/* Generated */    #define  TA_PREFIX(x) TA_S_##x
/* Generated */ #endif
/* Generated */ #undef   INPUT_TYPE
/* Generated */ #define  INPUT_TYPE float
/* Generated */ #if defined( _MANAGED ) && defined( USE_SUBARRAY )
/* Generated */ enum class Core::RetCode Core::Beta( int    startIdx,
/* Generated */                                      int    endIdx,
/* Generated */                                      SubArray<float>^ inReal0,
/* Generated */                                      SubArray<float>^ inReal1,
/* Generated */                                      int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                                      [Out]int%    outBegIdx,
/* Generated */                                      [Out]int%    outNBElement,
/* Generated */                                      SubArray<double>^  outReal )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::Beta( int    startIdx,
/* Generated */                                      int    endIdx,
/* Generated */                                      cli::array<float>^ inReal0,
/* Generated */                                      cli::array<float>^ inReal1,
/* Generated */                                      int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                                      [Out]int%    outBegIdx,
/* Generated */                                      [Out]int%    outNBElement,
/* Generated */                                      cli::array<double>^  outReal )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode beta( int    startIdx,
/* Generated */                      int    endIdx,
/* Generated */                      float        inReal0[],
/* Generated */                      float        inReal1[],
/* Generated */                      int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                      MInteger     outBegIdx,
/* Generated */                      MInteger     outNBElement,
/* Generated */                      double        outReal[] )
/* Generated */ #else
/* Generated */ TA_RetCode TA_S_BETA( int    startIdx,
/* Generated */                       int    endIdx,
/* Generated */                       const float  inReal0[],
/* Generated */                       const float  inReal1[],
/* Generated */                       int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                       int          *outBegIdx,
/* Generated */                       int          *outNBElement,
/* Generated */                       double        outReal[] )
/* Generated */ #endif
/* Generated */ {
/* Generated */     double S_xx = 0.0f; 
/* Generated */     double S_xy = 0.0f; 
/* Generated */     double S_x = 0.0f; 
/* Generated */     double S_y = 0.0f; 
/* Generated */     double last_price_x = 0.0f; 
/* Generated */     double last_price_y = 0.0f; 
/* Generated */     double trailing_last_price_x = 0.0f; 
/* Generated */     double trailing_last_price_y = 0.0f; 
/* Generated */     double tmp_real = 0.0f; 
/* Generated */     double x; 
/* Generated */     double y; 
/* Generated */     double n = 0.0f;
/* Generated */     int i, outIdx;
/* Generated */     int trailingIdx, nbInitialElementNeeded;
/* Generated */  #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */     if( startIdx < 0 )
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_START_INDEX,OutOfRangeStartIndex);
/* Generated */     if( (endIdx < 0) || (endIdx < startIdx))
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_END_INDEX,OutOfRangeEndIndex);
/* Generated */     #if !defined(_JAVA)
/* Generated */     if( !inReal0 ) return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     if( !inReal1 ) return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif 
/* Generated */     if( (int)optInTimePeriod == TA_INTEGER_DEFAULT )
/* Generated */        optInTimePeriod = 5;
/* Generated */     else if( ((int)optInTimePeriod < 1) || ((int)optInTimePeriod > 100000) )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #if !defined(_JAVA)
/* Generated */     if( !outReal )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif 
/* Generated */  #endif 
/* Generated */    nbInitialElementNeeded = optInTimePeriod;
/* Generated */    if( startIdx < nbInitialElementNeeded )
/* Generated */       startIdx = nbInitialElementNeeded;
/* Generated */    if( startIdx > endIdx )
/* Generated */    {
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
/* Generated */       return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */    }   
/* Generated */    trailingIdx = startIdx-nbInitialElementNeeded;
/* Generated */    last_price_x = trailing_last_price_x = inReal0[trailingIdx];
/* Generated */    last_price_y = trailing_last_price_y = inReal1[trailingIdx];
/* Generated */    i = ++trailingIdx;
/* Generated */    while( i < startIdx )
/* Generated */    {
/* Generated */        tmp_real = inReal0[i];
/* Generated */        if( !TA_IS_ZERO(last_price_x) )
/* Generated */           x = (tmp_real-last_price_x)/last_price_x;
/* Generated */        else
/* Generated */           x = 0.0;
/* Generated */        last_price_x = tmp_real;
/* Generated */        tmp_real = inReal1[i++];
/* Generated */        if( !TA_IS_ZERO(last_price_y) )
/* Generated */           y = (tmp_real-last_price_y)/last_price_y;
/* Generated */        else
/* Generated */           y = 0.0;
/* Generated */        last_price_y = tmp_real;
/* Generated */        S_xx += x*x;
/* Generated */        S_xy += x*y;
/* Generated */        S_x += x;
/* Generated */        S_y += y;      
/* Generated */    }
/* Generated */    outIdx = 0; 
/* Generated */    n = (double)optInTimePeriod;
/* Generated */    do
/* Generated */    {
/* Generated */        tmp_real = inReal0[i];
/* Generated */        if( !TA_IS_ZERO(last_price_x) )
/* Generated */           x = (tmp_real-last_price_x)/last_price_x;
/* Generated */        else
/* Generated */           x = 0.0;
/* Generated */        last_price_x = tmp_real;
/* Generated */        tmp_real = inReal1[i++];
/* Generated */        if( !TA_IS_ZERO(last_price_y) )
/* Generated */           y = (tmp_real-last_price_y)/last_price_y;
/* Generated */        else
/* Generated */           y = 0.0;
/* Generated */        last_price_y = tmp_real;
/* Generated */        S_xx += x*x;
/* Generated */        S_xy += x*y;
/* Generated */        S_x += x;
/* Generated */        S_y += y;
/* Generated */        tmp_real = inReal0[trailingIdx];
/* Generated */        if( !TA_IS_ZERO(trailing_last_price_x) )
/* Generated */           x = (tmp_real-trailing_last_price_x)/trailing_last_price_x;
/* Generated */        else
/* Generated */           x = 0.0;
/* Generated */        trailing_last_price_x = tmp_real;
/* Generated */        tmp_real = inReal1[trailingIdx++];
/* Generated */        if( !TA_IS_ZERO(trailing_last_price_y) )
/* Generated */           y = (tmp_real-trailing_last_price_y)/trailing_last_price_y;
/* Generated */        else
/* Generated */           y = 0.0;
/* Generated */        trailing_last_price_y = tmp_real;
/* Generated */        tmp_real = (n * S_xx) - (S_x * S_x);
/* Generated */        if( !TA_IS_ZERO(tmp_real) )
/* Generated */           outReal[outIdx++] = ((n * S_xy) - (S_x * S_y)) / tmp_real;
/* Generated */        else
/* Generated */           outReal[outIdx++] = 0.0;
/* Generated */        S_xx -= x*x;
/* Generated */        S_xy -= x*y;
/* Generated */        S_x -= x;
/* Generated */        S_y -= y;       
/* Generated */    } while( i <= endIdx );
/* Generated */    VALUE_HANDLE_DEREF(outNBElement) = outIdx;
/* Generated */    VALUE_HANDLE_DEREF(outBegIdx) = startIdx;
/* Generated */    return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */ }
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ }}} // Close namespace TicTacTec.TA.Lib
/* Generated */ #endif
/**** END GENCODE SECTION 11 - DO NOT DELETE THIS LINE ****/

