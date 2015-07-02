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
 *  MF       Mario Fortier
 *
 * Change history:
 *
 *  MMDDYY BY     Description
 *  -------------------------------------------------------------------
 *  021807 MF     Initial Version
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
/* Generated */ int Core::MovingAverageVariablePeriodLookback( int           optInMinPeriod, /* From 2 to 100000 */
/* Generated */                                              int           optInMaxPeriod, /* From 2 to 100000 */
/* Generated */                                              MAType        optInMAType ) /* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int movingAverageVariablePeriodLookback( int           optInMinPeriod, /* From 2 to 100000 */
/* Generated */                                               int           optInMaxPeriod, /* From 2 to 100000 */
/* Generated */                                               MAType        optInMAType ) /* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_MAVP_Lookback( int           optInMinPeriod, /* From 2 to 100000 */
/* Generated */                                           int           optInMaxPeriod, /* From 2 to 100000 */
/* Generated */                                           TA_MAType     optInMAType ) /* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */

/**** START GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */    /* min/max are checked for optInMinPeriod. */
/* Generated */    if( (int)optInMinPeriod == TA_INTEGER_DEFAULT )
/* Generated */       optInMinPeriod = 2;
/* Generated */    else if( ((int)optInMinPeriod < 2) || ((int)optInMinPeriod > 100000) )
/* Generated */       return -1;
/* Generated */ 
/* Generated */    /* min/max are checked for optInMaxPeriod. */
/* Generated */    if( (int)optInMaxPeriod == TA_INTEGER_DEFAULT )
/* Generated */       optInMaxPeriod = 30;
/* Generated */    else if( ((int)optInMaxPeriod < 2) || ((int)optInMaxPeriod > 100000) )
/* Generated */       return -1;
/* Generated */ 
/* Generated */    #if !defined(_MANAGED) && !defined(_JAVA)
/* Generated */    if( (int)optInMAType == TA_INTEGER_DEFAULT )
/* Generated */       optInMAType = (TA_MAType)0;
/* Generated */    else if( ((int)optInMAType < 0) || ((int)optInMAType > 8) )
/* Generated */       return -1;
/* Generated */ 
/* Generated */    #endif /* !defined(_MANAGED) && !defined(_JAVA)*/
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/**** END GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/
   
   return LOOKBACK_CALL(MA)(optInMaxPeriod, optInMAType);
}

/**** START GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
/*
 * TA_MAVP - Moving average with variable period
 * 
 * Input  = double, double
 * Output = double
 * 
 * Optional Parameters
 * -------------------
 * optInMinPeriod:(From 2 to 100000)
 *    Value less than minimum will be changed to Minimum period
 * 
 * optInMaxPeriod:(From 2 to 100000)
 *    Value higher than maximum will be changed to Maximum period
 * 
 * optInMAType:
 *    Type of Moving Average
 * 
 * 
 */
/* Generated */ 
/* Generated */ #if defined( _MANAGED ) && defined( USE_SUBARRAY )
/* Generated */ enum class Core::RetCode Core::MovingAverageVariablePeriod( int    startIdx,
/* Generated */                                                             int    endIdx,
/* Generated */                                                             SubArray<double>^ inReal,
/* Generated */                                                             SubArray<double>^ inPeriods,
/* Generated */                                                             int           optInMinPeriod, /* From 2 to 100000 */
/* Generated */                                                             int           optInMaxPeriod, /* From 2 to 100000 */
/* Generated */                                                             MAType        optInMAType,/* Generated */                                                             [Out]int%    outBegIdx,
/* Generated */                                                             [Out]int%    outNBElement,
/* Generated */                                                             SubArray<double>^  outReal )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::MovingAverageVariablePeriod( int    startIdx,
/* Generated */                                                             int    endIdx,
/* Generated */                                                             cli::array<double>^ inReal,
/* Generated */                                                             cli::array<double>^ inPeriods,
/* Generated */                                                             int           optInMinPeriod, /* From 2 to 100000 */
/* Generated */                                                             int           optInMaxPeriod, /* From 2 to 100000 */
/* Generated */                                                             MAType        optInMAType,/* Generated */                                                             [Out]int%    outBegIdx,
/* Generated */                                                             [Out]int%    outNBElement,
/* Generated */                                                             cli::array<double>^  outReal )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode movingAverageVariablePeriod( int    startIdx,
/* Generated */                                             int    endIdx,
/* Generated */                                             double       inReal[],
/* Generated */                                             double       inPeriods[],
/* Generated */                                             int           optInMinPeriod, /* From 2 to 100000 */
/* Generated */                                             int           optInMaxPeriod, /* From 2 to 100000 */
/* Generated */                                             MAType        optInMAType,/* Generated */                                             MInteger     outBegIdx,
/* Generated */                                             MInteger     outNBElement,
/* Generated */                                             double        outReal[] )
/* Generated */ #else
/* Generated */ TA_LIB_API TA_RetCode TA_MAVP( int    startIdx,
/* Generated */                                int    endIdx,
/* Generated */                                           const double inReal[],
/* Generated */                                           const double inPeriods[],
/* Generated */                                           int           optInMinPeriod, /* From 2 to 100000 */
/* Generated */                                           int           optInMaxPeriod, /* From 2 to 100000 */
/* Generated */                                           TA_MAType     optInMAType,/* Generated */                                           int          *outBegIdx,
/* Generated */                                           int          *outNBElement,
/* Generated */                                           double        outReal[] )
/* Generated */ #endif
/**** END GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */
   int i, j, lookbackTotal, outputSize, tempInt, curPeriod;
   ARRAY_INT_REF(localPeriodArray);
   ARRAY_REF(localOutputArray);
   VALUE_HANDLE_INT(localBegIdx);
   VALUE_HANDLE_INT(localNbElement);
   ENUM_DECLARATION(RetCode) retCode;

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
/* Generated */    if( !inReal ) return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    if( !inPeriods ) return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    #endif /* !defined(_JAVA)*/
/* Generated */    /* min/max are checked for optInMinPeriod. */
/* Generated */    if( (int)optInMinPeriod == TA_INTEGER_DEFAULT )
/* Generated */       optInMinPeriod = 2;
/* Generated */    else if( ((int)optInMinPeriod < 2) || ((int)optInMinPeriod > 100000) )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    /* min/max are checked for optInMaxPeriod. */
/* Generated */    if( (int)optInMaxPeriod == TA_INTEGER_DEFAULT )
/* Generated */       optInMaxPeriod = 30;
/* Generated */    else if( ((int)optInMaxPeriod < 2) || ((int)optInMaxPeriod > 100000) )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #if !defined(_MANAGED) && !defined(_JAVA)
/* Generated */    if( (int)optInMAType == TA_INTEGER_DEFAULT )
/* Generated */       optInMAType = (TA_MAType)0;
/* Generated */    else if( ((int)optInMAType < 0) || ((int)optInMAType > 8) )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_MANAGED) && !defined(_JAVA)*/
/* Generated */    #if !defined(_JAVA)
/* Generated */    if( !outReal )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA) */
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 4 - DO NOT DELETE THIS LINE ****/

   /* Insert TA function code here. */

   /* Identify the minimum number of price bar needed
    * to calculate at least one output.
    */
   lookbackTotal = LOOKBACK_CALL(MA)(optInMaxPeriod,optInMAType);

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

   /* Calculate exact output size */      
   if( lookbackTotal > startIdx )
      tempInt = lookbackTotal;
   else
	  tempInt = startIdx;
   if( tempInt > endIdx )
   {
	  /* No output */
      VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
      VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
      return ENUM_VALUE(RetCode,TA_SUCCESS,Success);      
   }   
   outputSize = endIdx - tempInt + 1;

   /* Allocate intermediate local buffer. */
   ARRAY_ALLOC(localOutputArray,outputSize);
   ARRAY_INT_ALLOC(localPeriodArray,outputSize);

   /* Copy caller array of period into local buffer.
    * At the same time, truncate to min/max.
	*/
   for( i=0; i < outputSize; i++ )
   {
      tempInt = (int)(inPeriods[startIdx+i]);
	  if( tempInt < optInMinPeriod )
		  tempInt = optInMinPeriod;
	  else if( tempInt > optInMaxPeriod )
          tempInt = optInMaxPeriod;
      localPeriodArray[i] = tempInt;
   }

   /* Process each element of the input. 
    * For each possible period value, the MA is calculated 
	* only once.
	* The outReal is then fill up for all element with
	* the same period.
	* A local flag (value 0) is set in localPeriodArray
	* to avoid doing a second time the same calculation.
	*/   
   for( i=0; i < outputSize; i++ )
   {
	   curPeriod = localPeriodArray[i];
	   if( curPeriod != 0 )
	   {
           /* TODO: This portion of the function can be slightly speed 
            *       optimized by making the function without unstable period 
	        *       start their calculation at 'startIdx+i' instead of startIdx.			
	        */

		   /* Calculation of the MA required. */
		   retCode = FUNCTION_CALL(MA)( startIdx, endIdx, inReal,
			                            curPeriod, optInMAType,
									    VALUE_HANDLE_OUT(localBegIdx),VALUE_HANDLE_OUT(localNbElement),localOutputArray );

           if( retCode != ENUM_VALUE(RetCode,TA_SUCCESS,Success) )
		   {
              ARRAY_FREE(localOutputArray);
			  ARRAY_INT_FREE(localPeriodArray);
              VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
              VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
              return retCode;
	       }
		   
		   outReal[i] = localOutputArray[i];
		   for( j=i+1; j < outputSize; j++ )
		   {
			   if( localPeriodArray[j] == curPeriod )
			   {
				   localPeriodArray[j] = 0; /* Flag to avoid recalculation */
				   outReal[j] = localOutputArray[j];
			   }
		   }		   
	   }
   }

   ARRAY_FREE(localOutputArray);
   ARRAY_INT_FREE(localPeriodArray);

   /* Done. Inform the caller of the success. */
   VALUE_HANDLE_DEREF(outBegIdx) = startIdx;
   VALUE_HANDLE_DEREF(outNBElement) = outputSize;
   return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
}

/**** START GENCODE SECTION 5 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::MovingAverageVariablePeriodStateInit( struct TA_MovingAverageVariablePeriod_State** _state,
/* Generated */                                               int           optInMinPeriod, /* From 2 to 100000 */
/* Generated */                                               int           optInMaxPeriod, /* From 2 to 100000 */
/* Generated */                                               MAType        optInMAType ) /* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int movingAverageVariablePeriodStateInit( struct TA_movingAverageVariablePeriod_State** _state,
/* Generated */                                                int           optInMinPeriod, /* From 2 to 100000 */
/* Generated */                                                int           optInMaxPeriod, /* From 2 to 100000 */
/* Generated */                                                MAType        optInMAType ) /* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_MAVP_StateInit( struct TA_MAVP_State** _state,
/* Generated */                                            int           optInMinPeriod, /* From 2 to 100000 */
/* Generated */                                            int           optInMaxPeriod, /* From 2 to 100000 */
/* Generated */                                            TA_MAType     optInMAType ) /* Generated */ 
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
/* Generated */    /* min/max are checked for optInMinPeriod. */
/* Generated */    if( (int)optInMinPeriod == TA_INTEGER_DEFAULT )
/* Generated */       optInMinPeriod = 2;
/* Generated */    else if( ((int)optInMinPeriod < 2) || ((int)optInMinPeriod > 100000) )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    /* min/max are checked for optInMaxPeriod. */
/* Generated */    if( (int)optInMaxPeriod == TA_INTEGER_DEFAULT )
/* Generated */       optInMaxPeriod = 30;
/* Generated */    else if( ((int)optInMaxPeriod < 2) || ((int)optInMaxPeriod > 100000) )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #if !defined(_MANAGED) && !defined(_JAVA)
/* Generated */    if( (int)optInMAType == TA_INTEGER_DEFAULT )
/* Generated */       optInMAType = (TA_MAType)0;
/* Generated */    else if( ((int)optInMAType < 0) || ((int)optInMAType > 8) )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_MANAGED) && !defined(_JAVA)*/
/* Generated */    STATE = TA_Calloc(1, sizeof(struct TA_MAVP_State));
/* Generated */    STATE_P.mem_index = 0;
/* Generated */    STATE_P.optInMinPeriod = optInMinPeriod;
/* Generated */    STATE_P.optInMaxPeriod = optInMaxPeriod;
/* Generated */    STATE_P.optInMAType = optInMAType;
/* Generated */    MEM_SIZE_P = TA_MAVP_Lookback(optInMinPeriod, optInMaxPeriod, optInMAType );
/* Generated */    #ifndef TA_MAVP_SUPPRESS_MEMORY_ALLOCATION
/* Generated */    if (MEM_SIZE_P > 0)
/* Generated */          MEM_P = TA_Calloc(MEM_SIZE_P, sizeof(struct TA_MAVP_Data));
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
/* Generated */ int Core::MovingAverageVariablePeriodState( struct TA_MovingAverageVariablePeriod_State* _state,
/* Generated */                                           cli::array<double>^ inReal,
/* Generated */                                           cli::array<double>^ inPeriods,
/* Generated */                                           cli::array<double>^  *outReal )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int movingAverageVariablePeriodState( struct TA_movingAverageVariablePeriod_State* _state,
/* Generated */                                            double       inReal,
/* Generated */                                            double       inPeriods,
/* Generated */                                            double        *outReal )
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_MAVP_State( struct TA_MAVP_State* _state,
/* Generated */                                        const double inReal,
/* Generated */                                        const double inPeriods,
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
/* Generated */    if( !inReal ) return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    if( !inPeriods ) return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    #endif /* !defined(_JAVA)*/
/* Generated */    size_t _cur_idx = STATE.mem_index++;
/* Generated */    if (MEM_SIZE > 0) _cur_idx %= MEM_SIZE;
/* Generated */    UNUSED_VARIABLE(_cur_idx); // in case PUSH\POP methods won't be used
/* Generated */    #ifndef TA_MAVP_SUPPRESS_EXIT_ON_NOT_ENOUGH_DATA
/* Generated */    if (NEED_MORE_DATA) {
/* Generated */          PUSH_TO_MEM(inReal,inReal);
/* Generated */          PUSH_TO_MEM(inPeriods,inPeriods);
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
/* Generated */ int Core::MovingAverageVariablePeriodStateFree( struct TA_MovingAverageVariablePeriod_State** _state )
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int movingAverageVariablePeriodStateFree( struct TA_movingAverageVariablePeriod_State** _state )
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_MAVP_StateFree( struct TA_MAVP_State** _state )
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
/* Generated */ enum class Core::RetCode Core::MovingAverageVariablePeriod( int    startIdx,
/* Generated */                                                             int    endIdx,
/* Generated */                                                             SubArray<float>^ inReal,
/* Generated */                                                             SubArray<float>^ inPeriods,
/* Generated */                                                             int           optInMinPeriod, /* From 2 to 100000 */
/* Generated */                                                             int           optInMaxPeriod, /* From 2 to 100000 */
/* Generated */                                                             MAType        optInMAType,/* Generated */                                                             [Out]int%    outBegIdx,
/* Generated */                                                             [Out]int%    outNBElement,
/* Generated */                                                             SubArray<double>^  outReal )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::MovingAverageVariablePeriod( int    startIdx,
/* Generated */                                                             int    endIdx,
/* Generated */                                                             cli::array<float>^ inReal,
/* Generated */                                                             cli::array<float>^ inPeriods,
/* Generated */                                                             int           optInMinPeriod, /* From 2 to 100000 */
/* Generated */                                                             int           optInMaxPeriod, /* From 2 to 100000 */
/* Generated */                                                             MAType        optInMAType,/* Generated */                                                             [Out]int%    outBegIdx,
/* Generated */                                                             [Out]int%    outNBElement,
/* Generated */                                                             cli::array<double>^  outReal )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode movingAverageVariablePeriod( int    startIdx,
/* Generated */                                             int    endIdx,
/* Generated */                                             float        inReal[],
/* Generated */                                             float        inPeriods[],
/* Generated */                                             int           optInMinPeriod, /* From 2 to 100000 */
/* Generated */                                             int           optInMaxPeriod, /* From 2 to 100000 */
/* Generated */                                             MAType        optInMAType,/* Generated */                                             MInteger     outBegIdx,
/* Generated */                                             MInteger     outNBElement,
/* Generated */                                             double        outReal[] )
/* Generated */ #else
/* Generated */ TA_RetCode TA_S_MAVP( int    startIdx,
/* Generated */                       int    endIdx,
/* Generated */                       const float  inReal[],
/* Generated */                       const float  inPeriods[],
/* Generated */                       int           optInMinPeriod, /* From 2 to 100000 */
/* Generated */                       int           optInMaxPeriod, /* From 2 to 100000 */
/* Generated */                       TA_MAType     optInMAType,/* Generated */                       int          *outBegIdx,
/* Generated */                       int          *outNBElement,
/* Generated */                       double        outReal[] )
/* Generated */ #endif
/* Generated */ {
/* Generated */    int i, j, lookbackTotal, outputSize, tempInt, curPeriod;
/* Generated */    ARRAY_INT_REF(localPeriodArray);
/* Generated */    ARRAY_REF(localOutputArray);
/* Generated */    VALUE_HANDLE_INT(localBegIdx);
/* Generated */    VALUE_HANDLE_INT(localNbElement);
/* Generated */    ENUM_DECLARATION(RetCode) retCode;
/* Generated */  #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */     if( startIdx < 0 )
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_START_INDEX,OutOfRangeStartIndex);
/* Generated */     if( (endIdx < 0) || (endIdx < startIdx))
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_END_INDEX,OutOfRangeEndIndex);
/* Generated */     #if !defined(_JAVA)
/* Generated */     if( !inReal ) return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     if( !inPeriods ) return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif 
/* Generated */     if( (int)optInMinPeriod == TA_INTEGER_DEFAULT )
/* Generated */        optInMinPeriod = 2;
/* Generated */     else if( ((int)optInMinPeriod < 2) || ((int)optInMinPeriod > 100000) )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     if( (int)optInMaxPeriod == TA_INTEGER_DEFAULT )
/* Generated */        optInMaxPeriod = 30;
/* Generated */     else if( ((int)optInMaxPeriod < 2) || ((int)optInMaxPeriod > 100000) )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #if !defined(_MANAGED) && !defined(_JAVA)
/* Generated */     if( (int)optInMAType == TA_INTEGER_DEFAULT )
/* Generated */        optInMAType = (TA_MAType)0;
/* Generated */     else if( ((int)optInMAType < 0) || ((int)optInMAType > 8) )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif 
/* Generated */     #if !defined(_JAVA)
/* Generated */     if( !outReal )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif 
/* Generated */  #endif 
/* Generated */    lookbackTotal = LOOKBACK_CALL(MA)(optInMaxPeriod,optInMAType);
/* Generated */    if( startIdx < lookbackTotal )
/* Generated */       startIdx = lookbackTotal;
/* Generated */    if( startIdx > endIdx )
/* Generated */    {
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
/* Generated */       return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */    }
/* Generated */    if( lookbackTotal > startIdx )
/* Generated */       tempInt = lookbackTotal;
/* Generated */    else
/* Generated */ 	  tempInt = startIdx;
/* Generated */    if( tempInt > endIdx )
/* Generated */    {
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
/* Generated */       return ENUM_VALUE(RetCode,TA_SUCCESS,Success);      
/* Generated */    }   
/* Generated */    outputSize = endIdx - tempInt + 1;
/* Generated */    ARRAY_ALLOC(localOutputArray,outputSize);
/* Generated */    ARRAY_INT_ALLOC(localPeriodArray,outputSize);
/* Generated */    for( i=0; i < outputSize; i++ )
/* Generated */    {
/* Generated */       tempInt = (int)(inPeriods[startIdx+i]);
/* Generated */ 	  if( tempInt < optInMinPeriod )
/* Generated */ 		  tempInt = optInMinPeriod;
/* Generated */ 	  else if( tempInt > optInMaxPeriod )
/* Generated */           tempInt = optInMaxPeriod;
/* Generated */       localPeriodArray[i] = tempInt;
/* Generated */    }
/* Generated */    for( i=0; i < outputSize; i++ )
/* Generated */    {
/* Generated */ 	   curPeriod = localPeriodArray[i];
/* Generated */ 	   if( curPeriod != 0 )
/* Generated */ 	   {
/* Generated */ 		   retCode = FUNCTION_CALL(MA)( startIdx, endIdx, inReal,
/* Generated */ 			                            curPeriod, optInMAType,
/* Generated */ 									    VALUE_HANDLE_OUT(localBegIdx),VALUE_HANDLE_OUT(localNbElement),localOutputArray );
/* Generated */            if( retCode != ENUM_VALUE(RetCode,TA_SUCCESS,Success) )
/* Generated */ 		   {
/* Generated */               ARRAY_FREE(localOutputArray);
/* Generated */ 			  ARRAY_INT_FREE(localPeriodArray);
/* Generated */               VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
/* Generated */               VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
/* Generated */               return retCode;
/* Generated */ 	       }
/* Generated */ 		   outReal[i] = localOutputArray[i];
/* Generated */ 		   for( j=i+1; j < outputSize; j++ )
/* Generated */ 		   {
/* Generated */ 			   if( localPeriodArray[j] == curPeriod )
/* Generated */ 			   {
/* Generated */ 				   localPeriodArray[j] = 0; 
/* Generated */ 				   outReal[j] = localOutputArray[j];
/* Generated */ 			   }
/* Generated */ 		   }		   
/* Generated */ 	   }
/* Generated */    }
/* Generated */    ARRAY_FREE(localOutputArray);
/* Generated */    ARRAY_INT_FREE(localPeriodArray);
/* Generated */    VALUE_HANDLE_DEREF(outBegIdx) = startIdx;
/* Generated */    VALUE_HANDLE_DEREF(outNBElement) = outputSize;
/* Generated */    return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */ }
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ }}} // Close namespace TicTacTec.TA.Lib
/* Generated */ #endif
/**** END GENCODE SECTION 11 - DO NOT DELETE THIS LINE ****/

