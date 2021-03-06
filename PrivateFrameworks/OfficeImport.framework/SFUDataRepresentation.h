/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSData;

@interface SFUDataRepresentation : NSObject  {
    BOOL mHasHash;
    unsigned int mHash;
    BOOL mHasSha1Hash;
    NSData *mSha1Hash;
}


- (int)compare:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)sha1Hash;
- (unsigned long)readIntoData:(id)arg1;
- (struct CGDataProvider { }*)cgDataProvider;
- (struct _xmlTextReader { }*)xmlReaderForGzippedData;
- (id)bufferedInputStreamWithBufferSize:(unsigned long)arg1;
- (BOOL)isEncrypted;
- (long long)encodedLength;
- (BOOL)hasSameLocationAs:(id)arg1;
- (BOOL)isReadable;
- (struct _xmlTextReader { }*)xmlReaderForGzippedDataWithInputStream:(id*)arg1;
- (id)bufferedInputStream;
- (id)inputStream;
- (long long)dataLength;
- (struct _xmlTextReader { }*)xmlReader;
- (struct _xmlDoc { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; int x10; int x11; struct _xmlDtd {} *x12; struct _xmlDtd {} *x13; struct _xmlNs {} *x14; char *x15; char *x16; void *x17; void *x18; char *x19; int x20; struct _xmlDict {} *x21; void *x22; int x23; int x24; }*)xmlDocument;

@end
