// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_UICOLLECTION_H_
#define FLATBUFFERS_GENERATED_UICOLLECTION_H_

#pragma clang system_header


#include "flatbuffers/flatbuffers.h"

struct Item;

struct Section;

struct UICollection;

struct Item FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_USE_TEXTURE = 4,
    VT_TEXT = 6
  };
  bool use_texture() const {
    return GetField<uint8_t>(VT_USE_TEXTURE, 0) != 0;
  }
  const flatbuffers::String * _Nullable text() const {
    return GetPointer<const flatbuffers::String *>(VT_TEXT);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, VT_USE_TEXTURE) &&
           VerifyOffset(verifier, VT_TEXT) &&
           verifier.Verify(text()) &&
           verifier.EndTable();
  }
};

struct ItemBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_use_texture(bool use_texture) {
    fbb_.AddElement<uint8_t>(Item::VT_USE_TEXTURE, static_cast<uint8_t>(use_texture), 0);
  }
  void add_text(flatbuffers::Offset<flatbuffers::String> text) {
    fbb_.AddOffset(Item::VT_TEXT, text);
  }
  explicit ItemBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ItemBuilder &operator=(const ItemBuilder &);
  flatbuffers::Offset<Item> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Item>(end);
    return o;
  }
};

inline flatbuffers::Offset<Item> CreateItem(
    flatbuffers::FlatBufferBuilder &_fbb,
    bool use_texture = false,
    flatbuffers::Offset<flatbuffers::String> text = 0) {
  ItemBuilder builder_(_fbb);
  builder_.add_text(text);
  builder_.add_use_texture(use_texture);
  return builder_.Finish();
}

inline flatbuffers::Offset<Item> CreateItemDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    bool use_texture = false,
    const char *text = nullptr) {
  return CreateItem(
      _fbb,
      use_texture,
      text ? _fbb.CreateString(text) : 0);
}

struct Section FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_HEADER = 4,
    VT_FOOTER = 6,
    VT_ITEMS = 8
  };
  const Item * _Nullable header() const {
    return GetPointer<const Item *>(VT_HEADER);
  }
  const Item * _Nullable footer() const {
    return GetPointer<const Item *>(VT_FOOTER);
  }
  const flatbuffers::Vector<flatbuffers::Offset<Item>> * _Nullable items() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<Item>> *>(VT_ITEMS);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_HEADER) &&
           verifier.VerifyTable(header()) &&
           VerifyOffset(verifier, VT_FOOTER) &&
           verifier.VerifyTable(footer()) &&
           VerifyOffset(verifier, VT_ITEMS) &&
           verifier.Verify(items()) &&
           verifier.VerifyVectorOfTables(items()) &&
           verifier.EndTable();
  }
};

struct SectionBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_header(flatbuffers::Offset<Item> header) {
    fbb_.AddOffset(Section::VT_HEADER, header);
  }
  void add_footer(flatbuffers::Offset<Item> footer) {
    fbb_.AddOffset(Section::VT_FOOTER, footer);
  }
  void add_items(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Item>>> items) {
    fbb_.AddOffset(Section::VT_ITEMS, items);
  }
  explicit SectionBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  SectionBuilder &operator=(const SectionBuilder &);
  flatbuffers::Offset<Section> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Section>(end);
    return o;
  }
};

inline flatbuffers::Offset<Section> CreateSection(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<Item> header = 0,
    flatbuffers::Offset<Item> footer = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Item>>> items = 0) {
  SectionBuilder builder_(_fbb);
  builder_.add_items(items);
  builder_.add_footer(footer);
  builder_.add_header(header);
  return builder_.Finish();
}

inline flatbuffers::Offset<Section> CreateSectionDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<Item> header = 0,
    flatbuffers::Offset<Item> footer = 0,
    const std::vector<flatbuffers::Offset<Item>> *items = nullptr) {
  return CreateSection(
      _fbb,
      header,
      footer,
      items ? _fbb.CreateVector<flatbuffers::Offset<Item>>(*items) : 0);
}

struct UICollection FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_SECTIONS = 4
  };
  const flatbuffers::Vector<flatbuffers::Offset<Section>> * _Nullable sections() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<Section>> *>(VT_SECTIONS);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_SECTIONS) &&
           verifier.Verify(sections()) &&
           verifier.VerifyVectorOfTables(sections()) &&
           verifier.EndTable();
  }
};

struct UICollectionBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_sections(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Section>>> sections) {
    fbb_.AddOffset(UICollection::VT_SECTIONS, sections);
  }
  explicit UICollectionBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  UICollectionBuilder &operator=(const UICollectionBuilder &);
  flatbuffers::Offset<UICollection> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<UICollection>(end);
    return o;
  }
};

inline flatbuffers::Offset<UICollection> CreateUICollection(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Section>>> sections = 0) {
  UICollectionBuilder builder_(_fbb);
  builder_.add_sections(sections);
  return builder_.Finish();
}

inline flatbuffers::Offset<UICollection> CreateUICollectionDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<flatbuffers::Offset<Section>> *sections = nullptr) {
  return CreateUICollection(
      _fbb,
      sections ? _fbb.CreateVector<flatbuffers::Offset<Section>>(*sections) : 0);
}

inline const UICollection * _Nullable GetUICollection(const void *buf) {
  return flatbuffers::GetRoot<UICollection>(buf);
}

inline const UICollection * _Nullable GetSizePrefixedUICollection(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<UICollection>(buf);
}

inline bool VerifyUICollectionBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<UICollection>(nullptr);
}

inline bool VerifySizePrefixedUICollectionBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<UICollection>(nullptr);
}

inline void FinishUICollectionBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<UICollection> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedUICollectionBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<UICollection> root) {
  fbb.FinishSizePrefixed(root);
}

#endif  // FLATBUFFERS_GENERATED_UICOLLECTION_H_