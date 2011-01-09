/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */



@interface DOMXPathResult : DOMObject 
{
}

@property(readonly) unsigned short resultType;
@property(readonly) double numberValue;
@property(copy,readonly) NSString *stringValue;
@property(readonly) BOOL booleanValue;
@property(retain,readonly) DOMNode *singleNodeValue;
@property(readonly) BOOL invalidIteratorState;
@property(readonly) NSUInteger snapshotLength;

+ (id)_wrapXPathResult:(struct XPathResult { NSInteger x1; struct Value { NSInteger x_2_1_1; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x_2_1_2; double x_2_1_3; struct RefPtr<WebCore::XPath::ValueData> { struct ValueData {} *x_4_2_1; } x_2_1_4; } x2; NSUInteger x3; struct NodeSet { void*x_4_1_1; struct Vector<WTF::RefPtr<WebCore::Node>,0ul> { NSUInteger x_2_2_1; struct VectorBuffer<WTF::RefPtr<WebCore::Node>,0ul> { struct RefPtr<WebCore::Node> {} *x_2_3_1; NSUInteger x_2_3_2; } x_2_2_2; } x_4_1_2; } x4; unsigned short x5; void*x6; struct RefPtr<WebCore::EventTargetNode> { struct EventTargetNode {} *x_7_1_1; } x7; struct RefPtr<WebCore::EventListener> { struct EventListener {} *x_8_1_1; } x8; }*)arg1;
     /* Encoded args for previous method: @12@0:4^{XPathResult=i{Value=iBd{RefPtr<WebCore::XPath::ValueData>=^{ValueData}}}I{NodeSet=B{Vector<WTF::RefPtr<WebCore::Node>,0ul>=I{VectorBuffer<WTF::RefPtr<WebCore::Node>,0ul>=^{RefPtr<WebCore::Node>}I}}}SB{RefPtr<WebCore::EventTargetNode>=^{EventTargetNode}}{RefPtr<WebCore::EventListener>=^{EventListener}}}8 */


- (void)dealloc;
- (void)finalize;
- (unsigned short)resultType;
- (double)numberValue;
- (id)stringValue;
- (BOOL)booleanValue;
- (id)singleNodeValue;
- (BOOL)invalidIteratorState;
- (NSUInteger)snapshotLength;
- (id)iterateNext;
- (id)snapshotItem:(NSUInteger)arg1;
- (struct XPathResult { NSInteger x1; struct Value { NSInteger x_2_1_1; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x_2_1_2; double x_2_1_3; struct RefPtr<WebCore::XPath::ValueData> { struct ValueData {} *x_4_2_1; } x_2_1_4; } x2; NSUInteger x3; struct NodeSet { void*x_4_1_1; struct Vector<WTF::RefPtr<WebCore::Node>,0ul> { NSUInteger x_2_2_1; struct VectorBuffer<WTF::RefPtr<WebCore::Node>,0ul> { struct RefPtr<WebCore::Node> {} *x_2_3_1; NSUInteger x_2_3_2; } x_2_2_2; } x_4_1_2; } x4; unsigned short x5; void*x6; struct RefPtr<WebCore::EventTargetNode> { struct EventTargetNode {} *x_7_1_1; } x7; struct RefPtr<WebCore::EventListener> { struct EventListener {} *x_8_1_1; } x8; }*)_xpathResult;
     /* Encoded args for previous method: ^{XPathResult=i{Value=iBd{RefPtr<WebCore::XPath::ValueData>=^{ValueData}}}I{NodeSet=B{Vector<WTF::RefPtr<WebCore::Node>,0ul>=I{VectorBuffer<WTF::RefPtr<WebCore::Node>,0ul>=^{RefPtr<WebCore::Node>}I}}}SB{RefPtr<WebCore::EventTargetNode>=^{EventTargetNode}}{RefPtr<WebCore::EventListener>=^{EventListener}}}8@0:4 */

- (id)_initWithXPathResult:(struct XPathResult { NSInteger x1; struct Value { NSInteger x_2_1_1; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x_2_1_2; double x_2_1_3; struct RefPtr<WebCore::XPath::ValueData> { struct ValueData {} *x_4_2_1; } x_2_1_4; } x2; NSUInteger x3; struct NodeSet { void*x_4_1_1; struct Vector<WTF::RefPtr<WebCore::Node>,0ul> { NSUInteger x_2_2_1; struct VectorBuffer<WTF::RefPtr<WebCore::Node>,0ul> { struct RefPtr<WebCore::Node> {} *x_2_3_1; NSUInteger x_2_3_2; } x_2_2_2; } x_4_1_2; } x4; unsigned short x5; void*x6; struct RefPtr<WebCore::EventTargetNode> { struct EventTargetNode {} *x_7_1_1; } x7; struct RefPtr<WebCore::EventListener> { struct EventListener {} *x_8_1_1; } x8; }*)arg1;
     /* Encoded args for previous method: @12@0:4^{XPathResult=i{Value=iBd{RefPtr<WebCore::XPath::ValueData>=^{ValueData}}}I{NodeSet=B{Vector<WTF::RefPtr<WebCore::Node>,0ul>=I{VectorBuffer<WTF::RefPtr<WebCore::Node>,0ul>=^{RefPtr<WebCore::Node>}I}}}SB{RefPtr<WebCore::EventTargetNode>=^{EventTargetNode}}{RefPtr<WebCore::EventListener>=^{EventListener}}}8 */


@end