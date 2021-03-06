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
 *  AC       Angelo Ciceri
 *
 *
 * Change history:
 *
 *  MMDDYY BY   Description
 *  -------------------------------------------------------------------
 *  011605 AC   Creation           
 *
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
/* Generated */ int Core::CdlXSideGap3MethodsLookback( void )
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int cdlXSideGap3MethodsLookback(  )
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_CDLXSIDEGAP3METHODS_Lookback( void )
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */

/**** START GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/
/* Generated */ /* No parameters to validate. */
/**** END GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/

   /* insert lookback code here. */
    return 2;
}

/**** START GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
/*
 * TA_CDLXSIDEGAP3METHODS - Upside/Downside Gap Three Methods
 * 
 * Input  = Open, High, Low, Close
 * Output = int
 * 
 */
/* Generated */ 
/* Generated */ #if defined( _MANAGED ) && defined( USE_SUBARRAY )
/* Generated */ enum class Core::RetCode Core::CdlXSideGap3Methods( int    startIdx,
/* Generated */                                                     int    endIdx,
/* Generated */                                                     SubArray<double>^ inOpen,
/* Generated */                                                     SubArray<double>^ inHigh,
/* Generated */                                                     SubArray<double>^ inLow,
/* Generated */                                                     SubArray<double>^ inClose,
/* Generated */                                                     [Out]int%    outBegIdx,
/* Generated */                                                     [Out]int%    outNBElement,
/* Generated */                                                     SubArray<int>^  outInteger )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::CdlXSideGap3Methods( int    startIdx,
/* Generated */                                                     int    endIdx,
/* Generated */                                                     cli::array<double>^ inOpen,
/* Generated */                                                     cli::array<double>^ inHigh,
/* Generated */                                                     cli::array<double>^ inLow,
/* Generated */                                                     cli::array<double>^ inClose,
/* Generated */                                                     [Out]int%    outBegIdx,
/* Generated */                                                     [Out]int%    outNBElement,
/* Generated */                                                     cli::array<int>^  outInteger )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode cdlXSideGap3Methods( int    startIdx,
/* Generated */                                     int    endIdx,
/* Generated */                                     double       inOpen[],
/* Generated */                                     double       inHigh[],
/* Generated */                                     double       inLow[],
/* Generated */                                     double       inClose[],
/* Generated */                                     MInteger     outBegIdx,
/* Generated */                                     MInteger     outNBElement,
/* Generated */                                     int           outInteger[] )
/* Generated */ #else
/* Generated */ TA_LIB_API TA_RetCode TA_CDLXSIDEGAP3METHODS( int    startIdx,
/* Generated */                                               int    endIdx,
/* Generated */                                                          const double inOpen[],
/* Generated */                                                          const double inHigh[],
/* Generated */                                                          const double inLow[],
/* Generated */                                                          const double inClose[],
/* Generated */                                                          int          *outBegIdx,
/* Generated */                                                          int          *outNBElement,
/* Generated */                                                          int           outInteger[] )
/* Generated */ #endif
/**** END GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
{
   /* Insert local variables here. */
    int i, outIdx, lookbackTotal;

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
/* Generated */    /* Verify required price component. */
/* Generated */    if(!inOpen||!inHigh||!inLow||!inClose)
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA)*/
/* Generated */    #if !defined(_JAVA)
/* Generated */    if( !outInteger )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA) */
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 4 - DO NOT DELETE THIS LINE ****/

   /* Identify the minimum number of price bar needed
    * to calculate at least one output.
    */

   lookbackTotal = LOOKBACK_CALL(CDLXSIDEGAP3METHODS)();

   /* Move up the start index if there is not
    * enough initial data.
    */
   if( startIdx < lookbackTotal )
      startIdx = lookbackTotal;

   /* Make sure there is still something to evaluate. */
   if( startIdx > endIdx )
   {
      VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
      VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
      return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
   }

   /* Do the calculation using tight loops. */
   /* Add-up the initial period, except for the last value. */
   i = startIdx;

   /* Proceed with the calculation for the requested range.
    * Must have:
    * - first candle: white (black) candle
    * - second candle: white (black) candle
    * - upside (downside) gap between the first and the second real bodies
    * - third candle: black (white) candle that opens within the second real body and closes within the first real body
    * outInteger is positive (1 to 100) when bullish or negative (-1 to -100) when bearish;
    * the user should consider that up/downside gap 3 methods is significant when it appears in a trend, while this 
    * function does not consider it
    */
   outIdx = 0;
   do
   {
        if( TA_CANDLECOLOR(i-2) == TA_CANDLECOLOR(i-1) &&                   // 1st and 2nd of same color
            TA_CANDLECOLOR(i-1) == -TA_CANDLECOLOR(i) &&                    // 3rd opposite color
            inOpen[i] < max(inClose[i-1], inOpen[i-1]) &&                   // 3rd opens within 2nd rb
            inOpen[i] > min(inClose[i-1], inOpen[i-1]) &&
            inClose[i] < max(inClose[i-2], inOpen[i-2]) &&                  // 3rd closes within 1st rb
            inClose[i] > min(inClose[i-2], inOpen[i-2]) &&
            ( ( 
                TA_CANDLECOLOR(i-2) == 1 &&                                 // when 1st is white
                TA_REALBODYGAPUP(i-1,i-2)                                   // upside gap
              ) ||
              (
                TA_CANDLECOLOR(i-2) == -1 &&                                // when 1st is black
                TA_REALBODYGAPDOWN(i-1,i-2)                                 // downside gap
              )
            )
        )
            outInteger[outIdx++] = TA_CANDLECOLOR(i-2) * 100;
        else
            outInteger[outIdx++] = 0;
        /* add the current range and subtract the first range: this is done after the pattern recognition 
         * when avgPeriod is not 0, that means "compare with the previous candles" (it excludes the current candle)
         */
        i++; 
   } while( i <= endIdx );

   /* All done. Indicate the output limits and return. */
   VALUE_HANDLE_DEREF(outNBElement) = outIdx;
   VALUE_HANDLE_DEREF(outBegIdx)    = startIdx;

   return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
}

/**** START GENCODE SECTION 5 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ Core::RetCode Core::CdlXSideGap3MethodsStateInit( struct TA_CdlXSideGap3Methods_State** _state )
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode cdlXSideGap3MethodsStateInit( struct TA_cdlXSideGap3Methods_State** _state )
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API TA_RetCode TA_CDLXSIDEGAP3METHODS_StateInit( struct TA_CDLXSIDEGAP3METHODS_State** _state )
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
/* Generated */    STATE = TA_Calloc(1, sizeof(struct TA_CDLXSIDEGAP3METHODS_State));
/* Generated */    STATE_P.mem_index = 0;
/* Generated */    MEM_SIZE_P = TA_CDLXSIDEGAP3METHODS_Lookback();
/* Generated */    #ifndef TA_CDLXSIDEGAP3METHODS_SUPPRESS_MEMORY_ALLOCATION
/* Generated */    if (MEM_SIZE_P > 0)
/* Generated */          MEM_P = TA_Calloc(MEM_SIZE_P, sizeof(struct TA_CDLXSIDEGAP3METHODS_Data));
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
/* Generated */ Core::RetCode Core::CdlXSideGap3MethodsState( struct TA_CdlXSideGap3Methods_State* _state,
/* Generated */                                             cli::array<double>^ inOpen,
/* Generated */                                             cli::array<double>^ inHigh,
/* Generated */                                             cli::array<double>^ inLow,
/* Generated */                                             cli::array<double>^ inClose,
/* Generated */                                             cli::array<int>^  *outInteger )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode cdlXSideGap3MethodsState( struct TA_cdlXSideGap3Methods_State* _state,
/* Generated */                                        double       inOpen,
/* Generated */                                        double       inHigh,
/* Generated */                                        double       inLow,
/* Generated */                                        double       inClose,
/* Generated */                                        int           *outInteger )
/* Generated */ #else
/* Generated */ TA_LIB_API TA_RetCode TA_CDLXSIDEGAP3METHODS_State( struct TA_CDLXSIDEGAP3METHODS_State* _state,
/* Generated */                                                              const double inOpen,
/* Generated */                                                              const double inHigh,
/* Generated */                                                              const double inLow,
/* Generated */                                                              const double inClose,
/* Generated */                                                              int           *outInteger )
/* Generated */ #endif
/**** END GENCODE SECTION 7 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */
int i1,i2;
/**** START GENCODE SECTION 8 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    if (_state == NULL)
/* Generated */          return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    #if !defined(_JAVA)
/* Generated */    /* Verify required price component. */
/* Generated */    if(!inOpen||!inHigh||!inLow||!inClose)
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA)*/
/* Generated */    size_t _cur_idx = STATE.mem_index++;
/* Generated */    if (MEM_SIZE > 0) _cur_idx %= MEM_SIZE;
/* Generated */    UNUSED_VARIABLE(_cur_idx); // in case PUSH\POP methods won't be used
/* Generated */    #ifndef TA_CDLXSIDEGAP3METHODS_SUPPRESS_EXIT_ON_NOT_ENOUGH_DATA
/* Generated */    if (NEED_MORE_DATA) {
/* Generated */          PUSH_TO_MEM(inOpen,inOpen);
/* Generated */          PUSH_TO_MEM(inHigh,inHigh);
/* Generated */          PUSH_TO_MEM(inLow,inLow);
/* Generated */          PUSH_TO_MEM(inClose,inClose);
/* Generated */    return ENUM_VALUE(RetCode,TA_NEED_MORE_DATA,NeedMoreData); }
/* Generated */    #endif
/* Generated */    #if !defined(_JAVA)
/* Generated */    if( !outInteger )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA) */
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 8 - DO NOT DELETE THIS LINE ****/

   /* insert state based TA dunc code here. */
                i1 = GET_LOCAL_IDX(-1);
                i2 = GET_LOCAL_IDX(-2);

                   if( TA_CANDLECOLOR_STATE_IDX(i2) == TA_CANDLECOLOR_STATE_IDX(i1) &&                   // 1st and 2nd of same color
                        TA_CANDLECOLOR_STATE_IDX(i1) == -TA_CANDLECOLOR_STATE_CUR() &&                    // 3rd opposite color
                        inOpen < max(MEM_IDX_NS(inClose, i1), MEM_IDX_NS(inOpen, i1)) &&                   // 3rd opens within 2nd rb
                        inOpen > min(MEM_IDX_NS(inClose, i1), MEM_IDX_NS(inOpen, i1)) &&
                        inClose < max(MEM_IDX_NS(inClose, i2), MEM_IDX_NS(inOpen, i2)) &&                  // 3rd closes within 1st rb
                        inClose > min(MEM_IDX_NS(inClose, i2), MEM_IDX_NS(inOpen, i2)) &&
                        ( (
                            TA_CANDLECOLOR_STATE_IDX(i2) == 1 &&                                 // when 1st is white
                            TA_REALBODYGAPUP_STATE_IDX(i1,i2)                                   // upside gap
                          ) ||
                          (
                            TA_CANDLECOLOR_STATE_IDX(i2) == -1 &&                                // when 1st is black
                            TA_REALBODYGAPDOWN_STATE_IDX(i1,i2)                                 // downside gap
                          )
                        )
                    )
                        VALUE_HANDLE_DEREF(outInteger) = TA_CANDLECOLOR_STATE_IDX(i2) * 100;
                    else
                        VALUE_HANDLE_DEREF(outInteger) = 0;

                   PUSH_TO_MEM(inOpen,inOpen);
                   PUSH_TO_MEM(inHigh,inHigh);
                   PUSH_TO_MEM(inLow,inLow);
                   PUSH_TO_MEM(inClose,inClose);

   return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
}

/**** START GENCODE SECTION 9 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ Core::RetCode Core::CdlXSideGap3MethodsStateFree( struct TA_CdlXSideGap3Methods_State** _state )
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode cdlXSideGap3MethodsStateFree( struct TA_cdlXSideGap3Methods_State** _state )
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API TA_RetCode TA_CDLXSIDEGAP3METHODS_StateFree( struct TA_CDLXSIDEGAP3METHODS_State** _state )
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
/* Generated */ #if defined( _MANAGED )
/* Generated */ Core::RetCode Core::CdlXSideGap3MethodsStateSave( struct TA_CdlXSideGap3Methods_State* _state,
/* Generated */                                                 FILE* _file )
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode cdlXSideGap3MethodsStateSave( struct TA_cdlXSideGap3Methods_State* _state,
/* Generated */                                            FILE* _file )
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API TA_RetCode TA_CDLXSIDEGAP3METHODS_StateSave( struct TA_CDLXSIDEGAP3METHODS_State* _state,
/* Generated */                                                                  FILE* _file )
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 11 - DO NOT DELETE THIS LINE ****/

{
   /* insert local variable here */

/**** START GENCODE SECTION 12 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */     int io_res; int state_is_null; state_is_null = (_state == NULL);
/* Generated */    io_res = fwrite(&state_is_null,sizeof(state_is_null),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    if (state_is_null) return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */    io_res = fwrite(&STATE.mem_index,sizeof(STATE.mem_index),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    io_res = fwrite(&STATE.mem_size,sizeof(STATE.mem_size),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    int memory_allocated;
/* Generated */    memory_allocated = STATE.memory != NULL;
/* Generated */    io_res = fwrite(&memory_allocated,sizeof(memory_allocated),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    if (memory_allocated && STATE.mem_size > 0) { io_res = fwrite(STATE.memory,sizeof(struct TA_CDLXSIDEGAP3METHODS_Data),STATE.mem_size,_file);
/* Generated */    if (io_res < (int) STATE.mem_size) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed); }
/* Generated */ 
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 12 - DO NOT DELETE THIS LINE ****/

   /* insert state save code here. */   
   return 0;
}

/**** START GENCODE SECTION 13 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ Core::RetCode Core::CdlXSideGap3MethodsStateLoad( struct TA_CdlXSideGap3Methods_State** _state,
/* Generated */                                                 FILE* _file )
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode cdlXSideGap3MethodsStateLoad( struct TA_cdlXSideGap3Methods_State** _state,
/* Generated */                                            FILE* _file )
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API TA_RetCode TA_CDLXSIDEGAP3METHODS_StateLoad( struct TA_CDLXSIDEGAP3METHODS_State** _state,
/* Generated */                                                                  FILE* _file )
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 13 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */

/**** START GENCODE SECTION 14 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    int io_res; int state_is_null;
/* Generated */    io_res = fread(&state_is_null,sizeof(state_is_null),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    if (state_is_null) return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */    if (STATE != NULL) return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    STATE = TA_Calloc(1, sizeof(struct TA_CDLXSIDEGAP3METHODS_State));
/* Generated */    io_res = fread(&STATE_P.mem_index,sizeof(STATE_P.mem_index),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    io_res = fread(&STATE_P.mem_size,sizeof(STATE_P.mem_size),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    int memory_allocated;
/* Generated */    io_res = fread(&memory_allocated,sizeof(memory_allocated),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    if (STATE_P.mem_size > 0 && memory_allocated) { STATE_P.memory = TA_Calloc(STATE_P.mem_size, sizeof(struct TA_CDLXSIDEGAP3METHODS_Data));
/* Generated */    io_res = fread(STATE_P.memory,sizeof(struct TA_CDLXSIDEGAP3METHODS_Data),STATE_P.mem_size,_file);
/* Generated */    if (io_res < (int) STATE_P.mem_size) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed); } 
/* Generated */ 
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 14 - DO NOT DELETE THIS LINE ****/

   /* insert state load code here. */   
   return 0;
}

/**** START GENCODE SECTION 15 - DO NOT DELETE THIS LINE ****/
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
/* Generated */ enum class Core::RetCode Core::CdlXSideGap3Methods( int    startIdx,
/* Generated */                                                     int    endIdx,
/* Generated */                                                     SubArray<float>^ inOpen,
/* Generated */                                                     SubArray<float>^ inHigh,
/* Generated */                                                     SubArray<float>^ inLow,
/* Generated */                                                     SubArray<float>^ inClose,
/* Generated */                                                     [Out]int%    outBegIdx,
/* Generated */                                                     [Out]int%    outNBElement,
/* Generated */                                                     SubArray<int>^  outInteger )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::CdlXSideGap3Methods( int    startIdx,
/* Generated */                                                     int    endIdx,
/* Generated */                                                     cli::array<float>^ inOpen,
/* Generated */                                                     cli::array<float>^ inHigh,
/* Generated */                                                     cli::array<float>^ inLow,
/* Generated */                                                     cli::array<float>^ inClose,
/* Generated */                                                     [Out]int%    outBegIdx,
/* Generated */                                                     [Out]int%    outNBElement,
/* Generated */                                                     cli::array<int>^  outInteger )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode cdlXSideGap3Methods( int    startIdx,
/* Generated */                                     int    endIdx,
/* Generated */                                     float        inOpen[],
/* Generated */                                     float        inHigh[],
/* Generated */                                     float        inLow[],
/* Generated */                                     float        inClose[],
/* Generated */                                     MInteger     outBegIdx,
/* Generated */                                     MInteger     outNBElement,
/* Generated */                                     int           outInteger[] )
/* Generated */ #else
/* Generated */ TA_RetCode TA_S_CDLXSIDEGAP3METHODS( int    startIdx,
/* Generated */                                      int    endIdx,
/* Generated */                                      const float  inOpen[],
/* Generated */                                      const float  inHigh[],
/* Generated */                                      const float  inLow[],
/* Generated */                                      const float  inClose[],
/* Generated */                                      int          *outBegIdx,
/* Generated */                                      int          *outNBElement,
/* Generated */                                      int           outInteger[] )
/* Generated */ #endif
/* Generated */ {
/* Generated */     int i, outIdx, lookbackTotal;
/* Generated */  #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */     if( startIdx < 0 )
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_START_INDEX,OutOfRangeStartIndex);
/* Generated */     if( (endIdx < 0) || (endIdx < startIdx))
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_END_INDEX,OutOfRangeEndIndex);
/* Generated */     #if !defined(_JAVA)
/* Generated */     if(!inOpen||!inHigh||!inLow||!inClose)
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif 
/* Generated */     #if !defined(_JAVA)
/* Generated */     if( !outInteger )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif 
/* Generated */  #endif 
/* Generated */    lookbackTotal = LOOKBACK_CALL(CDLXSIDEGAP3METHODS)();
/* Generated */    if( startIdx < lookbackTotal )
/* Generated */       startIdx = lookbackTotal;
/* Generated */    if( startIdx > endIdx )
/* Generated */    {
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
/* Generated */       return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */    }
/* Generated */    i = startIdx;
/* Generated */    outIdx = 0;
/* Generated */    do
/* Generated */    {
/* Generated */         if( TA_CANDLECOLOR(i-2) == TA_CANDLECOLOR(i-1) &&                   // 1st and 2nd of same color
/* Generated */             TA_CANDLECOLOR(i-1) == -TA_CANDLECOLOR(i) &&                    // 3rd opposite color
/* Generated */             inOpen[i] < max(inClose[i-1], inOpen[i-1]) &&                   // 3rd opens within 2nd rb
/* Generated */             inOpen[i] > min(inClose[i-1], inOpen[i-1]) &&
/* Generated */             inClose[i] < max(inClose[i-2], inOpen[i-2]) &&                  // 3rd closes within 1st rb
/* Generated */             inClose[i] > min(inClose[i-2], inOpen[i-2]) &&
/* Generated */             ( ( 
/* Generated */                 TA_CANDLECOLOR(i-2) == 1 &&                                 // when 1st is white
/* Generated */                 TA_REALBODYGAPUP(i-1,i-2)                                   // upside gap
/* Generated */               ) ||
/* Generated */               (
/* Generated */                 TA_CANDLECOLOR(i-2) == -1 &&                                // when 1st is black
/* Generated */                 TA_REALBODYGAPDOWN(i-1,i-2)                                 // downside gap
/* Generated */               )
/* Generated */             )
/* Generated */         )
/* Generated */             outInteger[outIdx++] = TA_CANDLECOLOR(i-2) * 100;
/* Generated */         else
/* Generated */             outInteger[outIdx++] = 0;
/* Generated */         i++; 
/* Generated */    } while( i <= endIdx );
/* Generated */    VALUE_HANDLE_DEREF(outNBElement) = outIdx;
/* Generated */    VALUE_HANDLE_DEREF(outBegIdx)    = startIdx;
/* Generated */    return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */ }
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ }}} // Close namespace TicTacTec.TA.Lib
/* Generated */ #endif
/**** END GENCODE SECTION 15 - DO NOT DELETE THIS LINE ****/

