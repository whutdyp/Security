/* Copyright (c) 1998 Apple Computer, Inc.  All rights reserved.
 *
 * NOTICE: USE OF THE MATERIALS ACCOMPANYING THIS NOTICE IS SUBJECT
 * TO THE TERMS OF THE SIGNED "FAST ELLIPTIC ENCRYPTION (FEE) REFERENCE
 * SOURCE CODE EVALUATION AGREEMENT" BETWEEN APPLE COMPUTER, INC. AND THE
 * ORIGINAL LICENSEE THAT OBTAINED THESE MATERIALS FROM APPLE COMPUTER,
 * INC.  ANY USE OF THESE MATERIALS NOT PERMITTED BY SUCH AGREEMENT WILL
 * EXPOSE YOU TO LIABILITY.
 ***************************************************************************
 *
 * NSMD5Hash.h
 *
 * Revision History
 * ----------------
 * 28 Mar 97	Doug Mitchell at Apple
 *	Created.
 */

#import <Foundation/Foundation.h>
#import <CryptKit/NSCryptors.h>

@interface NSMD5Hash : NSObject <NSDataDigester>

{
	void	*_priv;
}

+ digester;				// provides a concrete digester
- init;					// reusable
- (void)digestData:(NSData *)data;
- (NSData *)messageDigest;		// provide digest; re-init
- (NSData *)digestData:(NSData *)data withSalt:(NSData *)salt;

@end
